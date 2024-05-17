#include <iostream>
#include <List>
#include <string>
#include <vector>
using namespace std;

int main() 
{
	//�R����̉w����S�ĉp��Ő錾����
	list<const char*> stationName = {
		"ToKyo","Kanda","Akihabara","OkaChiMachi","Ueno",
		"Uguisudani","Nippori","Tabata","Komagome","Sugamo"
		"Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo",
		"Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu",
		"Meguro","Gotanda","Osaki","Shinagawa","Tamati",
		"HamamatsuCho","Shimbashi","Yarakucho"
	};

	cout << "1970�N�̎R����̉w�ꗗ\n";
	//1970�N���_�ł̎R����̉w��for�����g�p���Ĉ���A�N�Z�X���Ă���
	for (auto itr = stationName.begin(); itr != stationName.end(); ++itr) 
	{
		cout << *itr << "\n";
	}

	//�C�ӂ̈ʒu�ɗv�f��ǉ����鏈��
	for (list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); ++itr) 
	{
		//�C���e���[�^���c�[�w�������ꍇ
		if (*itr == "Tabata") 
		{
			//�c���w�̑O�ɐ����闢�w��ǉ�����
			itr = stationName.insert(itr, "Nishi-Nippori");
			//�C���e���[�^���C���N�������g����
			itr++;
		}
	}

	cout << "\n2019�N�̎R����̉w�ꗗ\n";
	//2019�N���_�ł̎R����̉w��for�����g�p���Ĉ���A�N�Z�X���Ă���
	for (auto itr = stationName.begin(); itr != stationName.end(); ++itr)
	{
		cout << *itr << "\n";
	}

	//�C�ӂ̈ʒu�ɗv�f��ǉ����鏈��
	for (list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); ++itr)
	{
		//�C���e���[�^���c���w�������ꍇ
		if (*itr == "Tamati")
		{
			//�c���w�̑O�ɍ��փQ�[�g�E�F�C��ǉ�����
			itr = stationName.insert(itr, "Takanawa-Gateway");
			//�C���e���[�^���C���N�������g����
			itr++;
		}
	}

	cout << "\n2022�N�̎R����̉w�ꗗ\n";
	//2022�N���_�ł̎R����̉w��for�����g�p���Ĉ���A�N�Z�X���Ă���
	for (auto itr = stationName.begin(); itr != stationName.end(); ++itr)
	{
		cout << *itr << "\n";
	}

	return 0;
}