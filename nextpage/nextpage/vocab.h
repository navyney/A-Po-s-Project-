#pragma once

namespace nextpage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for vocab
	/// </summary>
	public ref class vocab : public System::Windows::Forms::Form
	{
	public:
		vocab(void)
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
		~vocab()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ GoBack;
	private: System::Windows::Forms::Button^ buttonnext;

	private: System::Windows::Forms::TextBox^ textb1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button01;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(vocab::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button01 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->GoBack = (gcnew System::Windows::Forms::Button());
			this->buttonnext = (gcnew System::Windows::Forms::Button());
			this->textb1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button01);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->progressBar1);
			this->panel1->Controls->Add(this->GoBack);
			this->panel1->Controls->Add(this->buttonnext);
			this->panel1->Controls->Add(this->textb1);
			this->panel1->Location = System::Drawing::Point(59, 51);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1786, 939);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(876, 558);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(251, 205);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(876, 178);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(237, 199);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// button01
			// 
			this->button01->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button01.Image")));
			this->button01->Location = System::Drawing::Point(629, 367);
			this->button01->Name = L"button01";
			this->button01->Size = System::Drawing::Size(57, 47);
			this->button01->TabIndex = 14;
			this->button01->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox1->Location = System::Drawing::Point(591, 451);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(576, 336);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = resources->GetString(L"text02");
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &vocab::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox2->Location = System::Drawing::Point(591, 260);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(576, 197);
			this->textBox2->TabIndex = 13;
			this->textBox2->Text = resources->GetString(L"text01");
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox3->Location = System::Drawing::Point(578, 141);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(589, 126);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = resources->GetString(L"text00");
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &vocab::textBox3_TextChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(404, 861);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(923, 53);
			this->progressBar1->TabIndex = 10;
			// 
			// GoBack
			// 
			this->GoBack->Location = System::Drawing::Point(44, 858);
			this->GoBack->Name = L"GoBack";
			this->GoBack->Size = System::Drawing::Size(172, 56);
			this->GoBack->TabIndex = 3;
			this->GoBack->Text = L"PREVIOUS";
			this->GoBack->UseVisualStyleBackColor = true;
			this->GoBack->Click += gcnew System::EventHandler(this, &vocab::GoBack_Click);
			// 
			// buttonnext
			// 
			this->buttonnext->Location = System::Drawing::Point(1572, 858);
			this->buttonnext->Name = L"buttonnext";
			this->buttonnext->Size = System::Drawing::Size(172, 56);
			this->buttonnext->TabIndex = 1;
			this->buttonnext->Text = L"NEXT\r\n";
			this->buttonnext->UseVisualStyleBackColor = true;
			this->buttonnext->Click += gcnew System::EventHandler(this, &vocab::buttonnext_Click);
			// 
			// textb1
			// 
			this->textb1->Enabled = false;
			this->textb1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textb1->Location = System::Drawing::Point(77, 33);
			this->textb1->Multiline = true;
			this->textb1->Name = L"textb1";
			this->textb1->Size = System::Drawing::Size(535, 85);
			this->textb1->TabIndex = 0;
			this->textb1->Text = L"  lesson 1 : Vocab";
			this->textb1->TextChanged += gcnew System::EventHandler(this, &vocab::textb1_TextChanged);
			// 
			// vocab
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->panel1);
			this->Name = L"vocab";
			this->Text = L"vocab";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool switchTomix = false;
	
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonnext_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textb1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GoBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	switchTomix = true;
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
