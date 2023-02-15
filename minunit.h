/bin/bash: line 1: wq: command not found

#ifndef MINUNIT_H
#define MINUNIT_H

#include <string.h>

extern int tests_run;
extern int tests_passed;


void test_computeTime1() {
	int oracolo = 251000;
	mu_assert("ERRORE, 252000-1000 non fa 251000!", computeTime(252000,1000) == oracolo);
}
void test_computeTime2() {
	int oracolo = 209400;
	mu_assert("ERRORE, 210000-600 non fa 209400!", computeTime(210000,600) == oracolo);
}
void test_computeTime3() {
	int oracolo = 99800;
	mu_assert("ERRORE, 100000-200 non fa 99800!", computeTime(100000,200) == oracolo);
}
void test_computeTime4() {
	int oracolo = 254000;
	mu_assert("ERRORE, 255000-1000 non fa 254000!", computeTime(255000,1000) == oracolo);
}
void test_computeTime5() {
	int oracolo = 258000;
	mu_assert("ERRORE, 259000-1000 non fa 258000!", computeTime(259000,1000) == oracolo);
}
void test_computeTime6() {
	int oracolo = 219400;
	mu_assert("ERRORE, 220000-600 non fa 219400!", computeTime(220000,600) == oracolo);
}
void test_computeTime7() {
	int oracolo = 229400;
	mu_assert("ERRORE, 230000-600 non fa 229400!", computeTime(230000,600) == oracolo);
}
void test_computeTime8() {
	int oracolo = 49800;
	mu_assert("ERRORE, 50000-200 non fa 49800!", computeTime(50000,200) == oracolo);
}
void test_computeTime9() {
	int oracolo = 77800;
	mu_assert("ERRORE, 78000-200 non fa 77800!", computeTime(78000,200) == oracolo);
}
void test_computeTime10() {
	int oracolo = 269000;
	mu_assert("ERRORE, 270000-1000 non fa 269000!", computeTime(270000,1000) == oracolo);
}

void all_tests() {
	mu_run_test(test_computeTime1);
	mu_run_test(test_computeTime2);
      mu_run_test(test_computeTime3);
      mu_run_test(test_computeTime4);
      mu_run_test(test_computeTime5);
      mu_run_test(test_computeTime6);
      mu_run_test(test_computeTime7);
      mu_run_test(test_computeTime8);
      mu_run_test(test_computeTime9);
      mu_run_test(test_computeTime10);
     
}

#define mu_assert(message, test) do \
{ \
	tests_run++; \
	if (!(test)) \
		printf("%s\n",message); \
	else \
		tests_passed++; \
	} \
while (0)

#define mu_run_test(test) do \
{ \
	test(); \
	tests_run++; \
} \
while (0)

#endif
