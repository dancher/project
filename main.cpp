
#include "iostream"
#include "Bsort.cpp"
#include "Msort.cpp"
using namespace std;

void main()
{   /**
    @brief Объявление массивов
    @detailed Объявление массивов типа char размера 10
    */ 
	char mass1 [10];
	char mass2 [10];
	/**
    @brief Инициализация массива
    @detailed Инициализация массива для сортировки пузырьком
    */ 
	for (int i=0;i<10;i++)
	{
		cin>>mass1[i]; 
	}
	/**
    @brief сортировка пзырьком
    */
	bubblesort(mass1,10);
	/**
    @brief Вывод массива после сортировки пузырьком
    */ 
	for (int i=0;i<10;i++)
	{
		cout<<mass1[i]; 
	}
	/**
    @brief Инициализация массива
    @detailed Инициализация массива для сортировки слиянием
    */ 
	for (int i=0;i<10;i++)
	{
		cin>>mass2[i]; 
	}
	/**
    @brief сортировка слиянием
    */
	merge_sort(mass2,0,9) ;
	/**
    @brief Вывод массива после сортировки слиянием
    */ 
	for (int i=0;i<10;i++)
	{
		cout<<mass2[i]; 
	}
		  
}