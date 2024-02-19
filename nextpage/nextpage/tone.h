#pragma once

namespace nextpage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for tone
	/// </summary>
	public ref class tone : public System::Windows::Forms::Form
	{
	public:
		tone(void)
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
		~tone()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Button^ GoBack;
	private: System::Windows::Forms::Button^ buttonnext;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textb1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(tone::typeid));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->GoBack = (gcnew System::Windows::Forms::Button());
			this->buttonnext = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textb1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(1241, 680);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 63);
			this->button5->TabIndex = 29;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(940, 680);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 63);
			this->button4->TabIndex = 28;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(656, 680);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 63);
			this->button3->TabIndex = 27;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(391, 680);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 63);
			this->button2->TabIndex = 26;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 17));
			this->textBox4->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox4->Location = System::Drawing::Point(1220, 592);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(107, 138);
			this->textBox4->TabIndex = 25;
			this->textBox4->Text = L"ไม้โท\r\nB\?ba\r\n\?\?";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 17));
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox3->Location = System::Drawing::Point(907, 592);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(122, 138);
			this->textBox3->TabIndex = 24;
			this->textBox3->Text = L"ไม้เอก\r\nN\?men\r\n\?\?";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 17));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(612, 588);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(144, 138);
			this->textBox2->TabIndex = 23;
			this->textBox2->Text = L"ไม้จัตวา\r\nB\?is\? de\r\n\?\?\?";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 30, System::Drawing::FontStyle::Italic));
			this->label3->Location = System::Drawing::Point(228, 762);
			this->label3->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(396, 71);
			this->label3->TabIndex = 22;
			this->label3->Text = L"* ถ้าไม่มีวรรณยุกต์ออกเสียงสั้น *";
			this->label3->Click += gcnew System::EventHandler(this, &tone::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 17));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(347, 588);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(164, 142);
			this->textBox1->TabIndex = 21;
			this->textBox1->Text = L"ไม่มีวรรณยุกต์\r\nM\?ma\r\n\?\?";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(168, 209);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1319, 373);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &tone::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->progressBar2);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->GoBack);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->buttonnext);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textb1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Location = System::Drawing::Point(57, 53);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1786, 939);
			this->panel1->TabIndex = 33;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(404, 861);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(923, 53);
			this->progressBar2->TabIndex = 10;
			// 
			// GoBack
			// 
			this->GoBack->Location = System::Drawing::Point(44, 858);
			this->GoBack->Name = L"GoBack";
			this->GoBack->Size = System::Drawing::Size(172, 56);
			this->GoBack->TabIndex = 3;
			this->GoBack->Text = L"PREVIOUS";
			this->GoBack->UseVisualStyleBackColor = true;
			this->GoBack->Click += gcnew System::EventHandler(this, &tone::GoBack_Click);
			// 
			// buttonnext
			// 
			this->buttonnext->Location = System::Drawing::Point(1572, 858);
			this->buttonnext->Name = L"buttonnext";
			this->buttonnext->Size = System::Drawing::Size(172, 56);
			this->buttonnext->TabIndex = 1;
			this->buttonnext->Text = L"NEXT\r\n";
			this->buttonnext->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox7->Location = System::Drawing::Point(31, 124);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(306, 53);
			this->textBox7->TabIndex = 1;
			this->textBox7->Text = L"  วรรณยุกต์มี 4 เสียง";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &tone::textBox7_TextChanged);
			// 
			// textb1
			// 
			this->textb1->Enabled = false;
			this->textb1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textb1->Location = System::Drawing::Point(31, 21);
			this->textb1->Multiline = true;
			this->textb1->Name = L"textb1";
			this->textb1->Size = System::Drawing::Size(480, 82);
			this->textb1->TabIndex = 0;
			this->textb1->Text = L" lesson 0 : Pinyin";
			// 
			// tone
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1030);
			this->Name = L"tone";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool switchToform1 = false;
	//public: bool switchToform.... = false;
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GoBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	switchToform1 = true;
}
};
}
