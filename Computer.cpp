#include "Computer.h"

char Computer::ChooseComputerLevel()
{
	char key_char = 0;
	gotoxy(30, 9);
	cout << "Hi! please enter the level of the computer:" << endl;
	gotoxy(30, 10);
	cout << "for the BEST level press (1)" << endl;
	gotoxy(30, 11);
	cout << "for the GOOD level press (2)" << endl;
	gotoxy(30, 12);
	cout << "for the NOVICE level press (3)" << endl;
	while (1)
	{
		if (_kbhit())
		{
			key_char = _getch();
			return key_char;
		}
	}
}
void Computer::LessSpaces(general* f)
{
	int SerialNum, RotateNum;
	SerialNum = f->getSerial();
	RotateNum = f->getRotateNum();
	int Maxcounter = 0;
	bool Break = false;
	switch (SerialNum)
	{
	case SHAPES::LINE:
	{
		switch (RotateNum)
		{
		case 0:
		{
			//����� ��� ������� ���� �� ������ ����� �� ���� =4 ����� ���� �������
			//����� ������ ����� �� ����� �� �� ����� ������ ����� �� ��- ����� ����� 
			
			for (int i = ROWS; i > 0; i--)
			{
				for (int j = COLS + 2; j < COLS * 2 + 3; j++)
				{
					if (GameBoard.isValidPoint(j, i) && GameBoard.isValidPoint(j + 1, i) && GameBoard.isValidPoint(j + 2, i) && GameBoard.isValidPoint(j + 3, i))
					{
						
						while (f->getBodyPos(0).getX()!=j)
						{
							if (f->getBodyPos(0).getX() > j)
							{
								f->update(GameBoard, SerialNum, LEFT);
							}
							else
							{
								f->update(GameBoard, SerialNum, RIGHT);
							}
						}
						Break = true;
						break;
					}
				}
				if (Break)
				{
					break;
				}
			}
		}
		case 1:
		{
			//1
		}
		case 2:
		{
			//4
		}
		case 3:
		{
			//1
		}
		}
		Maxcounter = 4;
	}
	}

	//Point& res ;
	//for (int i = ROWS; i > 0; i--)
	//{
	//	for (int j = COLS + 2; j < 2 * COLS + 3; j++)
	//	{
	//		if (GameBoard.isValidPoint(j, i))
	//		{
	//			for (int count = 0; count < f->getSize(); count++)
	//			{
	//				Point& res = f->getBodyPos(count);// ������ ���� �� �������� ������� �� ���� �� �����
	//				if ((GameBoard.isValidPoint(res.getX() - 1, res.gety())))
	//				{
	//					f->update(GameBoard, f->getSerial(), LEFT);
	//					break;
	//					//f.updateFigureLeft(GameBoard, f->getSerial());
	//				}
	//				else if (GameBoard.isValidPoint(res.getX() + 1, res.gety()) && GameBoard.isValidPoint(res.getX(), res.gety() + 1))
	//				{
	//					f->update(GameBoard, f->getSerial(), RIGHT);
	//					break;
	//				}
	//				break;
	//				// else if right // else if rotate // else if counterrotate
	//			}
	/*		}
		}
	}*/
}

