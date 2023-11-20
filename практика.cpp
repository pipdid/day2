//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    setlocale(0, "Rus");
//    int;
//     int a, b, result;
//    cout << "Первое число" << endl; 
//    cin >> a;
//    cout << " Второе число" << endl;
//    cin >> b;
//    cout << " введите результат" << endl;// надо ввести результат
//    cin >> result; //результат
//    if (result == a * b) { // подсчет результата
//        cout << "Right";
//    }
//    else cout << "НЕПРАВИЛЬНО ИДИ УЧИ!!! ПРАВИЛЬНО БУДЕТ  >> " << a * b;//если пользователь ввел неправильный результат,выводиться эта строка 
//    return 0;
//}



//#include <iostream>
//
//using namespace std;
//
//int main(int argc, char * argv[])
//{
//    setlocale(0, "Rus");
//    int day;
//    cout << "Введите номер дня недели:"; cin >> day;
//    if ((day == 2) || (day == 3) || (day == 4))  
//        cout << "В этот день 6 пары." << endl;
//    else if ((day == 1) || (day == 5))
//        cout << "В этот день 2 пары." << endl; 
//    else if ((day == 6) || (day == 7))
//        cout << "В этот день нет пар." << endl;
//    
//    
//    return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//    setlocale(0, "rus");
//    int monday, tuesday, wednesday, thursday, friday, saturday, sunday;
//    int choice;
//    cout << "Какой день интересует?" << endl;
//    cin >> choice;
//    if (choice == 1)
//    {
//        cout << "Понедельник, 3 пары" << endl;
//        cout << "1. аАнглийский язык" << endl;
//        cout << "2. Архитектура" << endl;
//        cout << "3. Высшая Математика" << endl;
//    }
//    else
//    {
//        if (choice == 2)
//        {
//            cout << "Вторник, 3 пар" << endl;
//            cout << "1. Алгоритмизация баз данных" << endl;
//            cout << "2. Программирование" << endl;
//            cout << "3. Физра" << endl;
//            
//            
//        }
//        else
//        {
//            if (choice == 3)
//            {
//                cout << "Среда, 1 пары" << endl;
//                cout << "1. Иостория" << endl;
//                
//            }
//            else
//            {
//                if (choice == 4)
//                {
//                    cout << "Четверг, 2 пар" << endl;
//                    cout << "1. Зачет" << endl;
//                    cout << "2. Зачет " << endl;
//                     
//                }
//                else
//                {
//                    if (choice == 5)
//                    {
//                        cout << "Пятница, 1 пары" << endl;
//                        cout << "1. Практика" << endl;
//                        
//                    }
//                    else
//                    {
//                        if (choice == 6)
//                        {
//                            cout << "Суббота, отдых" << endl;
//                        }
//                        else
//                        {
//                            if (choice == 7)
//                            {
//                                cout << "Воскресенье, отдых" << endl;
//                            }
//                            return 0;
//                        }
//                    }
//                }
//            }
//        }
//    }
//}
//


#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int mas[11];
	mas[0] = 0;
	mas[1] = 1;
	mas[2] = 2;
	mas[3] = 3;
	mas[4] = 4;
	mas[5] = 5;
	mas[6] = 6;
	mas[7] = 7;
	mas[8] = 8;
	mas[9] = 9;
	mas[10] = 10;
	int sum = 0;
	for (int i = 0; i <= 10; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
		else {

		}
	}
	cout << "Сумма нечетных чисел равна :" << sum << endl;

}


