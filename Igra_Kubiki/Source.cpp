#include<iostream>
#include<ctime>
#include<Windows.h>
#include<conio.h>

using namespace std;
//void kidok(int kubik);
//
//
//int res();

//void main()
//{
//	char brosok;
//	
//	do
//	{
//		setlocale(LC_ALL, "");
//		srand(time(NULL));
//		cout << "																																			" << endl; cout << "																																			" << endl;
//		cout << "																																			" << endl; cout << "																																			" << endl;
//		cout << "																																			" << endl; cout << "																																			" << endl;
//		cout << "																																			" << endl; cout << "																																			" << endl;
//		cout << "																																			" << endl;
//		cout << "			   @########@@------ @##########------ -@@########@---- - @#########@@------  @@#######@@---- - @##########@	" << endl;
//		cout << "			    @#########@------@##########---- -@#############@-- - @############@--  @#############@-- - @############@	" << endl;
//		cout << "			          ####@------####--@####----@####@----   @####@-- @####----##### - @####@---- -@####@-- @####-- @####@	" << endl;
//		cout << "			     @@@@#####@-----@####--@####----####------ - @####@ - @####----##### - ####@------ -@####-- @####@@@####@	" << endl;
//		cout << "			     #######@@------####@--@####----###@------ - @####@ - @############@@  ####@------ -@####@ -@###########@	" << endl;
//		cout << "			        @@#####----@###@-- @####----###@------ - @####@ - @##########@-- - ####@------ -@####-- @####-- @#####	" << endl;
//		cout << "			         -@####--@####---- @####----@###@---- - @####@--  @####----------   @####@---- @####@-- @####--  @####	" << endl;
//		cout << "			   ####@@###### ##################@-- @#############@ -   @####---------- -  @#############@-- -@############@	" << endl;
//		cout << "			  ##########@   ##################@---- @#########@-- -   @####------------ - @#########@---- - @##########@@	" << endl;
//		cout << "			-------------- ####----------@###@-------------------------------------------------------------------------- 	" << endl;
//		cout << "			######################################################################################################      	" << endl;
//		system("pause");
//		system("cls");
//		cout << "																																			" << endl;
//		cout << "																																			" << endl; cout << "																																			" << endl;
//		cout << "																																			" << endl;
//		cout << "																																			" << endl;
//		cout << "																																			" << endl; cout << "																																			" << endl;
//		cout << "																																			" << endl; cout << "																																			" << endl;
//		cout << "																																			" << endl;
//		cout << "			 @###------###@-----@@######@-----########@@-------@####@-----       #########@-########@@-----@####@-----" << endl;
//		cout << "			 ####------####---@###########@---###########@-----######@----       #########@-###########@---######@----" << endl;
//		cout << "			 ####------####--@####-----####@--####---####@----########----       ####-------####---@###@--@#######----" << endl;
//		cout << "			 ##############--####-------####--##########@----@###@@###@---       ####-------####---####@-@###@@###@---" << endl;
//		cout << "			 ##############--####-------####--###########@--@###@--@###@--       ####-------##########@-@###@--@###@--" << endl;
//		cout << "			 ####------####--####@-----@###@--####---@####--############--       ####-------####@@@-----############--" << endl;
//		cout << "			 ####------####---#####@@@#####---####@@@####@-@###@@@@@@###@-       ####-------####-------@###@@@@@@####-" << endl;
//		cout << "			 ####------####----@########@@----##########@-@####------####@       ####-------####------@####------@###@" << endl;
//		system("pause");
//		system("cls");
//		cout << "																													      " << endl;
//		cout << "																													      " << endl;
//		cout << "																													      " << endl;
//		cout << "																														  " << endl;
//		cout << "																														  " << endl;
//		cout << "																														  " << endl;
//		cout << "																														  " << endl;
//		cout << "			----@####### @###########---@####-----@########@- @##########@ ###@---@###@ @########- @#####-----@####@      " << endl;
//		cout << "			-@####@@@@#@ @@@@###@@@@-- @#####@----@###@@@#### @@@@####@@@@ @###@-@###@- @###@@@@@- @#####@---@#####@      " << endl;
//		cout << "			@###@---------- @###@-----###@###@--- @###@--@###---- ###@----- @###@###@-- @###------ @######@--######@      " << endl;
//		cout << "			@###----------- @###@----@##@-@###@-- @#########@---- ###@------ @#####@--- @#######@- @###@###-@##@###@      " << endl;
//		cout << "			@###@---------- @###@---@##########-- @######@@------ ###@------- @###@---- @###------ @###-@##@##@-###@      " << endl;
//		cout << "			-#####@@@@#@--- @###@--@####@@@@###@- @###@---------- ###@---- @@@###@----- @###@@@@@- @###--#####--###@      " << endl;
//		cout << "			--@########@--- @###@--####-----@###@ @###@---------- ###@---- #####@------ @########- @###--@###@--###@      " << endl;
//		Sleep(2000);
//		system("cls");
//
//		int total_ya = 0;
//		int total_bot = 0;
//		int kinets = 0;
//		do
//		{
//			   
//				cout << "																																" << endl;
//				cout << "																																" << endl;
//				cout << "																																" << endl;
//				cout << "																																" << endl;
//				cout << "																																" << endl;
//				cout << " 			 -@###@---####@###########--@#######@---------@###--@####@-###@----####@-----########@------#####-------@#######@-  " << endl;
//				cout << " 			 --@###@-####-@@@@@###@@@@@####@@@####@-------@###-@###@---###@--@#####@----@###@@###@-----@#####@----@####@@@@@@-	" << endl;
//				cout << " 			 ---@######@------@###----###@-----@###@------@###@###@----###@-@######@----@##@--###@----@###@###@--@###@--------	" << endl;
//				cout << " 			 ----@####@-------@###---@###@-----@###@------@######@-----###@@###-###@----###@--###@----###@-@###--@########@---	" << endl;
//				cout << " 			 ---@######@------@###---@###@-----@###-------@###@###@----######@--###@---###@---###@---@#########@-@###@--------	" << endl;
//				cout << " 			 --@###@-####-----@###----@####@@@####@-------@###-@####@--#####@---###@-@####@@@@###@@@@###@@@@@###@-@####@@@@#@-	" << endl;
//				cout << " 			 @####@---####@---@###------@#######@---------@###---@###@-####-----###@-##############@###@-----@###@--@#######@-	" << endl;
//				cout << " 			 ------------------------------------------------------------------------###--------###@--------------------------	" << endl;
//				cout << " 			 ------------------------------------------------------------------------###--------###@--------------------------	" << endl;
//				cout << "			 																													" << endl;
//				cout << " 			 ---------------------------------------------------------------------------@@@@--@@@@----------------------------	" << endl;
//				cout << " 			 ----------------------------------------------------------------------------@######@-----------------------------	" << endl;
//				cout << " 			 ------------------------------------------------------------------------------------------@@@--------------------	" << endl;
//				cout << " 			 --############--@########--#########@--###@--@###--###@--@##@----@####--@###----@####-@#######@-----------------	" << endl;
//				cout << " 			 --###@----@###--@###@------###@--@###@-###@--@###--###@--@##@--@######--@###---######-@@---###@-----------------	" << endl;
//				cout << " 			 --###@----@###--@###@@@@@--###@--@###@-###@--@###--###@--@##@-@###@###--@###-@###@###-----@###@-----------------	" << endl;
//				cout << " 			 --###@----@###--@#######@--#########@--###@--@###--###@--@##@@###-@###--@###@###@@###---@###@-------------------	" << endl;
//				cout << " 			 --###@----@###--@###@------###@@-------###@--@###--###@--@#####@--@###--@######--@###---@##@--------------------	" << endl;
//				cout << " 			 --###@----@###--@########@-###@--------################- @####@---@###--@####@---@###---@###@-------------------	" << endl;
//				cout << " 			 --@##@----@###--@########@-@##@--------################- @##@-----@##@--@###@----@###---@##@--------------------	" << endl;
//				Sleep(2000);
//				system("cls");
//				cout << "			 ####@------####@-------######------@#####@---@###@---@#####@-@######@------@######---@###@------@####@------------@##@---" << endl;
//				cout << "			 ####@------####@------@######@-------@####@--@###@--@####@---@#######-----@#######---@###@----@######@---------@##@##@##@" << endl;
//				cout << "			 ####@------####@-----@###@####@-------@#####-@###@-@####@----@#######@----########---@###@---@#######@--------@@@######@@" << endl;
//				cout << "			 ####@@@@@@@####@----@####-@####---------@####@########@------@###@####@--@###@####---@###@--@####@###@----------@##@###@-" << endl;
//				cout << "			 ###############@----####@--@###@---------#############@------@###@@####-@###@@####---@###@-####@-@###@-----------@@--@@--" << endl;
//				cout << "			 ####@------####@---@############@------@####@@###@@####@-----@###@-@###@####-@####---@###@####@--@###@-------------------" << endl;
//				cout << "			 ####@------####@--@##############@----#####@-@###@-@#####@---@###@--#######--@####---@#######----@###@-------------------" << endl;
//				cout << "			 ####@------####@--####@------#####--@#####@--@###@---#####@--@###@--@#####@--@####---@#####@-----@###@-------------------" << endl;
//				cout << "			 ####@------####@-#####-------@####@#####@----@###@----@#####@@###@---@###@---@####---@####@------@###@					  " << endl;
//				cout << "																																      " << endl;
//				cin >> brosok;
//		} while (brosok != '*');
//		
//		int res_ya;
//		int res_bot;
//		
//		do
//		{
//			res_ya = res();
//			cout << "�i� ���������:_> " << res_ya << endl;
//			res_bot = res();
//			cout << "��������� ����:_> " << res_bot << endl;
//		} while (res_ya == res_bot);
//
//		if (res_ya > res_bot)
//		{
//			
//			for (int i = 1; i <= 5; i++)
//			{
//				do
//				{
//					cout << "�i� �i�" << endl;
//					cin >> brosok;
//				} while (brosok != '*');
//				cout << "�:" << endl;
//				total_ya += res();
//				cout << "���:" << endl;
//				total_bot += res();
//				cout << "��������� �i�: " << endl;
//			}
//			cout << "��� �������� ���� ����: " << total_ya << endl;
//			cout << "�������� ���� ���� ����: " << total_bot << endl;
//		}
//		else
//		{
//			cout << "��� ������ ������." << endl;
//			for (int i = 1; i <= 5; i++)
//			{
//				cout << "���:" << endl;
//				total_bot += res();
//				do
//				{
//					cout << "�i� �i�: " << endl;
//					cin >> brosok;
//				} while (brosok != '*');
//				cout << "�:" << endl;
//				total_ya += res();
//				cout << "��������� �i�: " << endl;
//			}
//			cout << "�i� ���������: " << total_ya << endl;
//			cout << "��������� ����: " << total_bot << endl;
//		}
//
//		if (total_ya == total_bot)
//		{
//			cout << "�i���!!" << endl;
//		}
//		else
//		{
//			if (total_ya > total_bot)
//			{
//				cout << "� ������!" << endl;
//			}
//			if (total_ya < total_bot)
//			{
//				cout << "��� �����i�!" << endl;
//			}
//		}
//		cout << "��� ���������� ��� ������ EXIT: " << endl;
//		cin >> kinets;
//	} while (brosok == 'EXIT');
//}
//
//void kidok(int kubik)
//{
//	switch (kubik)
//	{
//	case 1:
//		cout << "---------------" << endl;
//		cout << "|             |" << endl;
//		cout << "|             |" << endl;
//		cout << "|      *      |" << endl;
//		cout << "|             |" << endl;
//		cout << "|             |" << endl;
//		cout << "---------------" << endl;
//		break;
//	case 2:
//		cout << "---------------" << endl;
//		cout << "|             |" << endl;
//		cout << "|      *      |" << endl;
//		cout << "|             |" << endl;
//		cout << "|      *      |" << endl;
//		cout << "|             |" << endl;
//		cout << "---------------" << endl;
//		break;
//	case 3:
//		cout << "---------------" << endl;
//		cout << "|             |" << endl;
//		cout << "|  *          |" << endl;
//		cout << "|      *      |" << endl;
//		cout << "|          *  |" << endl;
//		cout << "|             |" << endl;
//		cout << "---------------" << endl;
//		break;
//	case 4:
//		cout << "--------------" << endl;
//		cout << "|            |" << endl;
//		cout << "|  *      *  |" << endl;
//		cout << "|            |" << endl;
//		cout << "|  *      *  |" << endl;
//		cout << "|            |" << endl;
//		cout << "--------------" << endl;
//		break;
//	case 5:
//		cout << "--------------" << endl;
//		cout << "|            |" << endl;
//		cout << "|  *      *  |" << endl;
//		cout << "|      *     |" << endl;
//		cout << "|  *      *  |" << endl;
//		cout << "|            |" << endl;
//		cout << "--------------" << endl;
//		break;
//	case 6:
//		cout << "--------------" << endl;
//		cout << "|            |" << endl;
//		cout << "|  *      *  |" << endl;
//		cout << "|  *      *  |" << endl;
//		cout << "|  *      *  |" << endl;
//		cout << "|            |" << endl;
//		cout << "--------------" << endl;
//		break;
//	}
//}
//int res()
//{
//	int kubik_1 = rand() % 6 + 1;
//	kidok(kubik_1);
//	int kubik_2 = rand() % 6 + 1;
//	kidok(kubik_2);
//	int result;
//	result = kubik_1 + kubik_2;
//	cout << "���������: " << result << endl;
//	return result;
//}

//int priamok(int x, int y) {
//    int i, j;
//    for (i = 1; i <= x; i++) {
//        for (j = 1; j <= y; j++)
//        {
//            cout << "^";
//        }
//        cout << endl;
//    }return(x, y);
//}
//void main()
//{
//    setlocale(LC_ALL, "");
//    int K, N;
//    cout << "1.������" << endl;
//    cin >> N;
//    cout << "2.������" << endl;
//    cin >> K;
//
//    priamok(K, N);
//    _getch();
//}


//int arr[20];
//float change() {
//	for (int i = 1; i < 15; i++) {
//		arr[i] = rand() % 100;
//		cout << " " << arr[i];
//	}
//	cout << endl;
//	int number;
//	int elements;
//	cin >> number;
//	cin >> elements;
//	arr[number] = elements;
//	for (int i = 1; i < 15; i++) {
//
//		cout << " " << arr[i];
//	}
//	return 0;
//
//}
//int main() {
//	change();
//}
