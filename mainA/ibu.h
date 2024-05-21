#ifndef IBU_H
#define IBU_H

class ibu
{
public:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama)
	{
		cout << "ibu \"" << nama << "\" ada\n";
	}
	~ibu()
	{
		cout << "Ibu \"" << nama << "\" tidak ada\n";
	}

	void tambahAnak(anak*);
	void cetakAnak();
};
void ibu::tambahAnak(anak* pANak) 
{
	daftar_anak.push_back(pANak);
}
void ibu::cetakAnak()
{
	cout << "Daftar Anak dari Ibu\"" << this->nama << "\":\n";
	for (auto& a : daftar_anak)
	{
		cout << a->nama << "\n";
	}
	cout << endl;
}


#endif // !IBU_H

