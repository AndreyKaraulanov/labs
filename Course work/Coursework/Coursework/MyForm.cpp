#include "MyForm.h"
#include "Header.h"


using namespace System;
using namespace System::Windows::Forms;

void main() {

	srand(time(NULL));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Coursework::MyForm form;
	Application::Run(% form);

}

int GetSizeFile() {
	setlocale(LC_ALL, "rus");
	size_t i = 0;
	string Rus, Eng;
	ifstream getEng("Eng.txt");
	ifstream getRus("Rus.txt");
	if (getEng.is_open() && getRus.is_open())
	{
		while (!getEng.eof() && !getRus.eof())
		{
			getEng >> Eng;
			getRus >> Rus;
			i++;

		}
	}
	else
		return 0;
	return i;
}

void check() {
	int sizeFile = GetSizeFile();
	if (sizeFile == 0) {
		MessageBox::Show("Read file error!", "Error!");
		exit(0);
	}
}





System::Void Coursework::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	//MessageBox::Show("Read file error!", "Error!");
	File::WriteAllText("c:\\Coursework\Eng.txt", textBox1->Text);
	File::WriteAllText("c:\\Coursework\Rus.txt", textBox1->Text);
}

System::Void Coursework::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	int sizeFile = GetSizeFile();
	if (sizeFile == 0) {
		MessageBox::Show("Read file error!", "Error!");
		exit(0);
	}
	string* Eng = new string[sizeFile];
	string* Rus = new string[sizeFile];
	ifstream getEng("Eng.txt");
	ifstream getRus("Rus.txt");
	int i = 0;
	if (getEng.is_open() && getRus.is_open()) {
		while (!getEng.eof() && !getRus.eof())
		{
			getEng >> Eng[i];
			getRus >> Rus[i];
			i++;
		}

	}
	else {
		MessageBox::Show("Read file error!", "Error!");
		exit(0);
	}
	for (size_t i = 0; i < sizeFile; i++) {
		if (textBox3->Text == Convert_string_to_String(Eng[i])) {
			textBox4->Text = Convert_string_to_String(Rus[i]);
			//textBox4->Text = "Hello World!";
		}
	}
}

System::Void Coursework::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	check();
	int sizeFile = GetSizeFile();
	string* Eng = new string[sizeFile];
	string* Rus = new string[sizeFile];
	ifstream getEng("Eng.txt");
	ifstream getRus("Rus.txt");
	int i = 0;
	if (getEng.is_open() && getRus.is_open()) {
		while (!getEng.eof() && !getRus.eof())
		{
			getEng >> Eng[i];
			getRus >> Rus[i];
			i++;
		}

	}
	else {
		MessageBox::Show("Read file error!", "Error!");
		exit(0);
	}
	for (size_t i = 0; i < sizeFile; i++) {
		if (Convert_String_to_string(textBox5->Text) == Rus[i]) {
			Convert_String_to_string(textBox6->Text) = Eng[i];
		}
	}
}
