#include <iostream>
#include <time.h>
#include <stdlib.h>

void fun_massiv(int* x,int p){   // функция заполнения массива случайными числами
	for (int i = 0; i < p; i++) {
		x[i] = rand() % 9 +1;
	}

}

void fun_vuvod(int* x, int p) {    //функция вывода массива на экран
	for (int i = 0; i < p; i++) {
		std::cout << x[i] << " ";
	}
	std::cout << "\n";
}

void fun_dell(int* x, int p,int flag) {    //функция удаления из массива четных или нечетных чисел
	int ind_3 = 0;
	if (flag == 0) {
		for (int i = 0; i < p; i++) {
			if (x[i] % 2 == 0) {
				x[i] = 0;
			}
		}
		for (int j = 0; j < p; j++) {
			for (int i = p; i > 0; i--) {
				if (x[i - 1] == 0) {
					x[i - 1] = x[i];
					x[i] = 0;
					ind_3 += 1;
				}
				else {
					ind_3 += 0;
				}
			}
			if (ind_3 == 0) {
				break;
			}
			ind_3 = 0;
		}
		

	}
	else {
		for (int i = 0; i < p; i++) {
			if (x[i] % 2 != 0) {
				x[i] = 0;
			}
		}

		for (int j = 0; j < p; j++) {
			for (int i = p; i > 0; i--) {
				if (x[i - 1] == 0) {
					x[i - 1] = x[i];
					x[i] = 0;
					ind_3 += 1;
				}
				else {
					ind_3 += 0;
				}
			}
			if (ind_3 == 0) {
				break;
			}
			ind_3 = 0;
		}


	}

}


int main() {
	srand(time(NULL));
	 int flag_menu = 0;
	 int m = 0;
	 int n = 0;
     int* m_1 = &m;
	 int* a_1 = NULL;
	 int* a_2 = NULL;
	 int* a_3 = NULL;
	 int ind = 0;
	 int ind_2 = 0;
	 int a[100] = { 0 };
	 int b[100] = { 0 };
	 int c[100] = { 0 };
	 a_1 = &a[0];
	 a_2= &b[0];
	 a_3 = &c[0];

	 do {
		 std::cout << "\n" << "Vvedite nomer zadaci : 1-4,0-vugod" << "\n";
		 std::cin >> flag_menu;
		 if (flag_menu == 1) {
			 std::cout << "\n" << "Zadaca nomer 1 :" << "\n" << "Vvedite razmer massiva M : ";
			 std::cin >> m;
			 std::cout << "\n" << "Vvedite razmer massiva N : ";
			 std::cin >> n;
			 fun_massiv(a_1, m);
			 fun_massiv(a_2, n);
			 std::cout << "\n" << "polu4eniu massiv m : " << "\n";
			 fun_vuvod(a_1, m);
			 std::cout << "\n" << "polu4eniu massiv n : " << "\n";
			 fun_vuvod(a_2, n);
			 
			 for (int i = 0; i < m; i++) {
				 for (int j = 0; j < n; j++) {
					 if (a[i] != b[j]) {
						 ind_2 += 0;
					 }
					 else {
						 ind_2++;
					 }
				 }
				 if (ind_2 == 0) {
					 c[ind] = a[i];
					 ind++;
					 ind_2 = 0;
				 }
				 else {
					 ind_2 = 0;
				 }
			 }
			 std::cout << "\n" << "Polu4enii rezultat : " << "\n";
			 fun_vuvod(a_3, ind);
			 
		 }
		 if (flag_menu == 2) {
			 std::cout << "\n" << "Zadaca nomer 2 :" << "\n" << "Vvedite razmer massiva M : ";
			 std::cin >> m;
			 std::cout << "\n" << "Vvedite razmer massiva N : ";
			 std::cin >> n;
			 fun_massiv(a_1, m);
			 fun_massiv(a_2, n);
			 std::cout << "\n" << "polu4eniu massiv m : " << "\n";
			 fun_vuvod(a_1, m);
			 std::cout << "\n" << "polu4eniu massiv n : " << "\n";
			 fun_vuvod(a_2, n);
			 ind = 0;
			 ind_2 = 0;
			 for (int i = 0; i < m; i++) {
				 for (int j = 0; j < n; j++) {
					 if (a[i] != b[j]) {
						 ind_2 += 0;
					 }
					 else {
						 ind_2++;
					 }
				 }
				 if (ind_2 == 0) {
					 c[ind] = a[i];
					 ind++;
					 ind_2 == 0;
				 }
				 else {
					 ind_2 == 0;
				 }
			 }
			 ind_2 = 0;
			 for (int i = 0; i < n; i++) {
				 for (int j = 0; j < m; j++) {
					 if (b[i] != a[j]) {
						 ind_2 += 0;
					 }
					 else {
						 ind_2++;
					 }
				 }
				 if (ind_2 == 0) {
					 c[ind] = b[i];
					 ind++;
					 ind_2 == 0;
				 }
				 else {
					 ind_2 == 0;
				 }
			 }

			 std::cout << "\n" << "Polu4enii rezultat : " << "\n";
			 fun_vuvod(a_3, ind);

		 }


		 if (flag_menu == 3) {

			 std::cout << "\n" << "Zadaca nomer 3 :" << "\n" << "Vvedite razmer massiva M : ";
			 std::cin >> m;
			 
			 fun_massiv(a_1, m);
			 std::cout << "\n" << "polu4eniu massiv m : " << "\n";
			 fun_vuvod(a_1, m);

			 std::cout << "\n" << "4to ydalit 0-4etnuie , drugoe 4islo- ne4etnue" << "\n";

			 int flag_d = 0;
			 std::cin >> flag_d;
			 if (flag_d == 0) {

				 fun_dell(a_1, m, flag_d);
			 }
			 else {
				 fun_dell(a_1, m, flag_d);
			 }
			 std::cout << "\n" << "Polu4enii rezultat : " << "\n";
			 fun_vuvod(a_1, m);


		 }


		 if (flag_menu == 4) {

			 std::cout << "\n" << "Zadaca nomer 4 :" << "\n" << "Vvedite razmer massiva M : ";
			 std::cin >> m;
			 fun_massiv(a_1, m);
			 std::cout << "\n" << "polu4eniu massiv m : " << "\n";
			 fun_vuvod(a_1, m);
			 int ind_4 = 0;
			 int summa = 0;
			 int summa_2 = 0;
			 std::cout << "\n" << "Opredelenie maks posledovatelnosti = ";
			 ind = 0;
			 ind_2 = 0;
			 summa = 0;
			 for (int i = 0; i < m; i++) {
				 if (a[i] % 2 == 0) {
					 ind++;
					 ind_2++;
					 summa += a[i];
				 }
				 else {
					 ind_2 = 0;
				 }


				 if (ind_2 == 0) {
					 if (ind > ind_4) {
						ind_4 = ind;
					 }
					 if (summa > summa_2) {
						 summa_2 = summa;
						 summa = 0;
					 }
					 ind = 0;
					 
				 }
			 }
			 std::cout << "\n" << ind_4;
			 std::cout << "\n" << "Mask summa elementov = ";
			 std::cout << summa_2;



		 }
	 
	 
	 } while (flag_menu != 0);

}