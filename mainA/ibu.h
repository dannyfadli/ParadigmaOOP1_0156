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
	void cetakANak();
};
void ibu::tambahAnak()
{
	cout << "Daftar Anak dari Ibu\"" << this->nama << "\":\n";
	for (auto& a : daftar_anak)
	{
		cout << a->nama << "\n";
	}
}


#endif // !IBU_H

