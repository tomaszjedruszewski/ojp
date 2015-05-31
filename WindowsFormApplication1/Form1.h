#pragma once
#include "Form2.h"

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ComboBox^  comboBox1;
	protected:

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Button^  button1;

	public: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	public:
	private:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk", L"Gorzów Wielkopolski",
					L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
			this->comboBox1->Location = System::Drawing::Point(102, 70);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(102, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Poka¿";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(102, 107);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 6;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 26);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Program pokazuje odleg³oœci miêdzy wybranymi \r\nmiastami województwami.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(330, 215);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Form1";
			this->Text = L"Projekt OJP - C++/CLI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		Form2^ form2 = gcnew Form2;
		form2->label1->Text = comboBox1->Text;
		form2->label2->Text = comboBox2->Text;

#pragma region
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "345";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "345";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "327";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "327";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "534";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "534";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "428";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "428";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "307";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "307";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "407";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "407";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "214";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "214";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "295";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "295";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "192";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "192";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "452";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "452";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "428";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "428";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "353";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "353";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "574";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "574";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "177";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "177";
		if ((form2->label1->Text == "Bia³ystok") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "476";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Bia³ystok"))
			form2->label6->Text = "476";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "143";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "143";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "191";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "191";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "325";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "325";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "309";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "309";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "365";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "365";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "375";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "375";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "180";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "180";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "180";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "180";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "273";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "273";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "273";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "273";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "440";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "440";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "266";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "233";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "226";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "226";
		if ((form2->label1->Text == "Bydgoszcz") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "234";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Bydgoszcz"))
			form2->label6->Text = "234";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "289";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "289";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "455";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "455";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "410";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "410";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "485";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "485";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "434";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "434";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "293";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "293";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "135";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "135";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "412";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "412";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "245";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "245";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "531";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "531";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "288";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "288";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "283";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "283";
		if ((form2->label1->Text == "Gdañsk") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "377";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Gdañsk"))
			form2->label6->Text = "377";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "379";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "379";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "425";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "425";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "441";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "441";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "528";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "528";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "307";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "307";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "367";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "367";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "295";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "295";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "120";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "120";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "557";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "557";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "90";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "90";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "395";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "395";
		if ((form2->label1->Text == "Gorzów Wielkopolski") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "219";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Gorzów Wielkopolski"))
			form2->label6->Text = "219";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "131";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "131";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "70";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "70";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "272";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "272";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "170";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "170";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "403";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "403";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "90";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "90";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "279";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "279";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "213";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "213";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "473";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "473";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "259";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "259";
		if ((form2->label1->Text == "Katowice") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "169";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Katowice"))
			form2->label6->Text = "169";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "101";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "101";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "142";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "142";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "129";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "129";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "324";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "324";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "191";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "191";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "307";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "307";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "133";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "133";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "503";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "503";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "154";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "154";
		if ((form2->label1->Text == "Kielce") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "253";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Kielce"))
			form2->label6->Text = "253";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "227";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "227";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "191";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "191";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "415";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "415";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "158";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "158";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "334";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "334";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "146";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "146";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "527";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "527";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "252";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "252";
		if ((form2->label1->Text == "Kraków") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "235";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Kraków"))
			form2->label6->Text = "235";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "223";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "223";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "315";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "315";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "331";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "331";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "409";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "409";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "140";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "140";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "596";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "596";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "153";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "153";
		if ((form2->label1->Text == "Lublin") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "386";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Lublin"))
			form2->label6->Text = "386";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "235";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "235";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "161";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "161";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "187";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "187";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "261";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "261";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "379";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "379";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "118";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "118";
		if ((form2->label1->Text == "£ódŸ") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "182";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "£ódŸ"))
			form2->label6->Text = "182";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "387";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "387";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "282";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "282";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "428";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "428";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "393";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "393";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "176";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "176";
		if ((form2->label1->Text == "Olsztyn") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "377";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Olsztyn"))
			form2->label6->Text = "377";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "204";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "204";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "298";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "298";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "383";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "383";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "275";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "275";
		if ((form2->label1->Text == "Opole") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "78";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Opole"))
			form2->label6->Text = "78";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "440";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "440";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "195";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "195";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "278";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "278";
		if ((form2->label1->Text == "Poznañ") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "144";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Poznañ"))
			form2->label6->Text = "144";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "636";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "636";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "253";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "253";
		if ((form2->label1->Text == "Rzeszów") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "370";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Rzeszów"))
			form2->label6->Text = "370";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "454";
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "454";
		if ((form2->label1->Text == "Szczecin") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "308";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Szczecin"))
			form2->label6->Text = "308";
#pragma endregion
#pragma region
		if ((form2->label1->Text == "Warszawa") && (form2->label2->Text == "Wroc³aw"))
			form2->label6->Text = "301";
		if ((form2->label1->Text == "Wroc³aw") && (form2->label2->Text == "Warszawa"))
			form2->label6->Text = "301";
#pragma endregion
		form2->ShowDialog();
		
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
		if (comboBox1->Text == "Bia³ystok"){
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bydgoszcz", L"Gdañsk", L"Gorzów Wielkopolski",
					L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Bydgoszcz"){

			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Gdañsk", L"Gorzów Wielkopolski",
					L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Gdañsk")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gorzów Wielkopolski",
					L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Gorzów Wielkopolski")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Katowice")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Gorzów Wielkopolski", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Kielce")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Gorzów Wielkopolski", L"Katowice", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Kraków")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Gorzów Wielkopolski", L"Katowice", L"Kielce", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Lublin")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Gorzów Wielkopolski", L"Katowice", L"Kielce", L"Kraków", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "£ódŸ")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Gorzów Wielkopolski", L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Olsztyn")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Gorzów Wielkopolski", L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Opole")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Gorzów Wielkopolski", L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Poznañ", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Poznañ")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Gorzów Wielkopolski", L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Rzeszów", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Rzeszów")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Gorzów Wielkopolski", L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Szczecin", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Szczecin")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Gorzów Wielkopolski", L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Warszawa",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Warszawa")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Gorzów Wielkopolski", L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin",
					L"Wroc³aw"
			});
		}
		if (comboBox1->Text == "Wroc³aw")
		{
			comboBox2->Items->Remove("Bia³ystok");
			comboBox2->Items->Remove("Bydgoszcz");
			comboBox2->Items->Remove("Gdañsk");
			comboBox2->Items->Remove("Gorzów Wielkopolski");
			comboBox2->Items->Remove("Katowice");
			comboBox2->Items->Remove("Kielce");
			comboBox2->Items->Remove("Kraków");
			comboBox2->Items->Remove("Lublin");
			comboBox2->Items->Remove("£ódŸ");
			comboBox2->Items->Remove("Olsztyn");
			comboBox2->Items->Remove("Opole");
			comboBox2->Items->Remove("Poznañ");
			comboBox2->Items->Remove("Rzeszów");
			comboBox2->Items->Remove("Szczecin");
			comboBox2->Items->Remove("Warszawa");
			comboBox2->Items->Remove("Wroc³aw");

			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Bia³ystok", L"Bydgoszcz", L"Gdañsk",
					L"Gorzów Wielkopolski", L"Katowice", L"Kielce", L"Kraków", L"Lublin", L"£ódŸ", L"Olsztyn", L"Opole", L"Poznañ", L"Rzeszów", L"Szczecin",
					L"Warszawa"
			});
		}
	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}

