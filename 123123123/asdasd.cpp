#include <iostream>
using namespace std;
/**
@mainpage ����� ��������
*/

int array[100];
/** @brief ����������
*/
void*Sort(int col) 
{ 
    /** ��������� ���������� ��� �������� �������������� ����������
	*/
    int trash=0;  
    // ���� �� ����� ���������� ���������
    for (int i=1; i<=col ; i++)
    {
        // ���� �� ����� col-i
        for (int j=1; j<=col-i; j++) 
        {
            // ���� ����� ������� ������
            if (array [j]>array [j+1]) 
            {
                // �������, �� ������ �� �������
                trash=array[j]; 
                array [j]=array [j+1];
                array [j+1]=trash;
            }
        }
    }
}
/**@brief ����� �� ����� ������ ������� ����� ����������
*/
void*Out(int col) 
{
    for (int i=1; i<=col; i++) 
    cout << array [i] <<" ";
    cout << endl; 
}
int main()
{
    int col_el;
    cout << " Enter length of array"<< endl;
    
    cin >> col_el;
       for (int n=1; n<=col_el ; n++) 
    cin >> array[n];
    Sort(col_el); 
    
    cout << "Result is :"<<endl; 
     
    Out(col_el);
   
    cin >> col_el; 
    return 0;
}
