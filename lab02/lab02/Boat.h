// -- �������  ������ �� ����������� �������� �����  
//    ������� ���������� �����  �� �������� ��������� �����������
#pragma once 
#include "Combi.h"


int boat(
    int V,         // [in]  ������������ ��� �����
    short m,       // [in]  ���������� ���� ��� �����������     
    short n,       // [in]  ����� �����������  
    const int v[], // [in]  ��� ������� ����������  
    const int c[], // [in]  ����� �� ��������� ������� ����������     
    short r[]      // [out] ���������: ������� ��������� �����������
);


int boat_�(
    short m,      // [in]  ���������� ���� ��� �����������
    int minv[],   // [in]  ����������� ��� ���������� �� ������  ����� 
    int maxv[],   // [in]  ������������ ��� ���������� ��  ������ �����  
    short n,      // [in]  ����� �����������  
    const int v[],// [in]  ��� ������� ����������  
    const int c[],// [in]  ����� �� ��������� ������� ����������   
    short r[]     // [out] ������  ��������� �����������  
);
