
#include "iostream"
#include "Bsort.cpp"
#include "Msort.cpp"
using namespace std;

void main()
{   /**
    @brief ���������� ��������
    @detailed ���������� �������� ���� char ������� 10
    */ 
	char mass1 [10];
	char mass2 [10];
	/**
    @brief ������������� �������
    @detailed ������������� ������� ��� ���������� ���������
    */ 
	for (int i=0;i<10;i++)
	{
		cin>>mass1[i]; 
	}
	/**
    @brief ���������� ��������
    */
	bubblesort(mass1,10);
	/**
    @brief ����� ������� ����� ���������� ���������
    */ 
	for (int i=0;i<10;i++)
	{
		cout<<mass1[i]; 
	}
	/**
    @brief ������������� �������
    @detailed ������������� ������� ��� ���������� ��������
    */ 
	for (int i=0;i<10;i++)
	{
		cin>>mass2[i]; 
	}
	/**
    @brief ���������� ��������
    */
	merge_sort(mass2,0,9) ;
	/**
    @brief ����� ������� ����� ���������� ��������
    */ 
	for (int i=0;i<10;i++)
	{
		cout<<mass2[i]; 
	}
		  
}