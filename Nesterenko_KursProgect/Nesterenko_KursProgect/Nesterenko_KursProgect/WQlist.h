#ifndef WQlistH
#define WQlistH
#define InputError cout<<"���� ���� �� ���, �������� ��������, �� �� ����� �� ��������� �� ���."<<endl;return 0
const int maxWords = 60;
const int maxBoardSize = 34;
#define slovar {"#����#","#����#","#�����#","#������#","#������#",\
		"#�����#","#��������#","#�������������#","#�����#","#���������#","#����#",\
		"#������#","#������#","#������#","#���������#","#�������#","#������#","#����'�#",\
		"#������#","#������#","#�����#","#������#","#������#","#�������#","#�������#","#������#",\
		"#��������#","#�����#","#�����#","#������#","#�������#","#����#","#�����#","#�������#","#�������#",\
		"#�����#","#��������#","#������#","#�������#","#������#","#������#", "#����#", "#����#", "#�������#",\
		"#���#", "#����#", "#�����#", "#�����#", "#�����#", "#�����#", "#�����#", "#�����#", "#�����#", "#����#",\
		"#�����#", "#������#", "#���#","#����#", "#�������#","#���#" } ;
#define qtoslovar {"�������� ��������, �� ����� ������� ������ ���� ��� ������",\
		"������������ ������-����","���� �������","������� ����","������, ��� ���������� ������ ��������",\
		"�������� ����� ��� ���� � ����'� ���������", \
		" ������������� ������ ��� �������� �� ������������� �� ���������� ����������","���� �����'� �� �����",\
		"����� ���� ���������","˳������ ������, ���������� ��볺�","������� ���, ��� ����� �� ��� ���� ����",\
		"�������, � ��� ����������� �����","�������� ������� ���","��������, �� �������� ����� �� ������ �� ����� ����",\
		"���������� ��������, �� ����� �����","��������� ������� �� �����","8-� ������� ������� �������",\
		"����� �������� ����","��� �������� ������ ��������?"," 9-� ������� ������� �������","�� ������","� ����� �� ����, �������� ������� �����","�����������",\
		"������� ����� �������� ������ ������.","������ ������� ������� ������� ������. ³� ���� ������ ������� � ������ ����������",\
		"���� ������ ��� �� ������","������� �����","�������, ��� �� �������� ���","�������� ����, �� ���� ����",\
		"���� � ������ �� ����� ������ �� �������� �������� � ������ ���.","��������� ������� ���","������� �������",\
		"����� ������� � ������ ����?","������� ����","������������� �������","�������, ���� ������ ����� ϳ�����",\
		"������ ����� ����","�������, �� ������ ���� � ��� ���������","������ � ���� (�����) ������","������� ���",\
		"��������� ��� ����� ������� ����� �� ��������� �����",\
		"�������� � ������� �������, � ��� ����������� ������� �������� ��� ������� �����������",\
		"����� ������� ������� �������","...������������(�������������� �������)",\
		"����� ����������� ��������� ���������� � ����������� ��������� ������",\
		"�������� ����-����������� � ������ � �������, ������� �� ������ ����� ����������������� ������ ",\
		"�����, ���� ������ ���� � ����� *������*(�������������)","������ ������� ������ ��� ������ ����, ������� ������",\
		"�������� �������","� ����������� ������ �� ������������� ��� - ������ � ������� �������������","Ƴ���� ��'�",\
		"������������ ��������� ��� ��������� ������ �����",\
		"��-������ �����������, ��������� �� ����-������ �� �������� ������� ���������,��������,�����",\
		"���������(� ���������� �� �������� �����������)� ����������� �����",\
		"����� ��� ...(����� ������� ������� ��������, ���� ����������)","�������� ����� �� ������ ������� ������",\
		"������������ ������ � �������,�� ������ �������� ����������� � ����������� � �������� ��� ���������� ��������� ������� ��� � �����",\
		"... �������(��������� ����������)","Գ���������� �����, �� ������ ����, ��������� ������, �� �� �������","������� ������"};
#endif
