#include <iostream>
#include <List>
#include <string>
#include <vector>
using namespace std;

int main() 
{
	//山手線の駅名を全て英語で宣言する
	list<const char*> stationName = {
		"ToKyo","Kanda","Akihabara","OkaChiMachi","Ueno",
		"Uguisudani","Nippori","Tabata","Komagome","Sugamo"
		"Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo",
		"Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu",
		"Meguro","Gotanda","Osaki","Shinagawa","Tamati",
		"HamamatsuCho","Shimbashi","Yarakucho"
	};

	cout << "1970年の山手線の駅一覧\n";
	//1970年時点での山手線の駅をfor分を使用して一つずつアクセスしていく
	for (auto itr = stationName.begin(); itr != stationName.end(); ++itr) 
	{
		cout << *itr << "\n";
	}

	//任意の位置に要素を追加する処理
	for (list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); ++itr) 
	{
		//インテレータが田端駅だった場合
		if (*itr == "Tabata") 
		{
			//田町駅の前に西日暮里駅を追加する
			itr = stationName.insert(itr, "Nishi-Nippori");
			//インテレータをインクリメントする
			itr++;
		}
	}

	cout << "\n2019年の山手線の駅一覧\n";
	//2019年時点での山手線の駅をfor分を使用して一つずつアクセスしていく
	for (auto itr = stationName.begin(); itr != stationName.end(); ++itr)
	{
		cout << *itr << "\n";
	}

	//任意の位置に要素を追加する処理
	for (list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); ++itr)
	{
		//インテレータが田町駅だった場合
		if (*itr == "Tamati")
		{
			//田町駅の前に高輪ゲートウェイを追加する
			itr = stationName.insert(itr, "Takanawa-Gateway");
			//インテレータをインクリメントする
			itr++;
		}
	}

	cout << "\n2022年の山手線の駅一覧\n";
	//2022年時点での山手線の駅をfor分を使用して一つずつアクセスしていく
	for (auto itr = stationName.begin(); itr != stationName.end(); ++itr)
	{
		cout << *itr << "\n";
	}

	return 0;
}