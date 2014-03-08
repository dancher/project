#define SWAP(A, B) { char t = A; A = B; B = t; }
/**
@brief ������� ����������
@detailed ������������ ���������� ������� ��������
@param ��������� �� ������, ����������� �������
*/ 
void bubblesort(char *a, int n)
{
  int i, j;
 
  for (i = n - 1; i > 0; i--)
  {
    for (j = 0; j < i; j++)
    {
      if (a[j] > a[j + 1]) 
        SWAP( a[j], a[j + 1] );
    }
  }
}