﻿#pragma once
#include <windows.h>
namespace vocab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int numpage = 1;
	public:
		MyForm(void)
		{
			InitializeComponent();
			changepage(numpage);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button8;
	protected:
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ next;

	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pic1;
	private: System::Windows::Forms::PictureBox^ pic2;
	private: System::Windows::Forms::PictureBox^ pic3;
	private: System::Windows::Forms::PictureBox^ pic4;
	private: System::Windows::Forms::PictureBox^ pic5;
	private: System::Windows::Forms::PictureBox^ pic8;

	private: System::Windows::Forms::PictureBox^ pic7;
	private: System::Windows::Forms::PictureBox^ pic6;
	private: System::Windows::Forms::PictureBox^ pic9;
	private: System::Windows::Forms::PictureBox^ pic10;
	private: System::Windows::Forms::PictureBox^ pic11;
	private: System::Windows::Forms::PictureBox^ pic12;
	private: System::Windows::Forms::PictureBox^ pic13;
	private: System::Windows::Forms::PictureBox^ pic14;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->next = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pic1 = (gcnew System::Windows::Forms::PictureBox());
			this->pic2 = (gcnew System::Windows::Forms::PictureBox());
			this->pic3 = (gcnew System::Windows::Forms::PictureBox());
			this->pic4 = (gcnew System::Windows::Forms::PictureBox());
			this->pic5 = (gcnew System::Windows::Forms::PictureBox());
			this->pic8 = (gcnew System::Windows::Forms::PictureBox());
			this->pic7 = (gcnew System::Windows::Forms::PictureBox());
			this->pic6 = (gcnew System::Windows::Forms::PictureBox());
			this->pic9 = (gcnew System::Windows::Forms::PictureBox());
			this->pic10 = (gcnew System::Windows::Forms::PictureBox());
			this->pic11 = (gcnew System::Windows::Forms::PictureBox());
			this->pic12 = (gcnew System::Windows::Forms::PictureBox());
			this->pic13 = (gcnew System::Windows::Forms::PictureBox());
			this->pic14 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic14))->BeginInit();
			this->SuspendLayout();
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->AutoSize = true;
			this->button8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button8->Location = System::Drawing::Point(173, 1181);
			this->button8->MaximumSize = System::Drawing::Size(400, 200);
			this->button8->MinimumSize = System::Drawing::Size(136, 60);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(240, 107);
			this->button8->TabIndex = 42;
			this->button8->Text = L"Previous";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button13->AutoSize = true;
			this->button13->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button13->Location = System::Drawing::Point(12, 897);
			this->button13->MaximumSize = System::Drawing::Size(400, 200);
			this->button13->MinimumSize = System::Drawing::Size(136, 60);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(320, 132);
			this->button13->TabIndex = 46;
			this->button13->Text = L"Previous";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 56));
			this->label1->Location = System::Drawing::Point(19, 7);
			this->label1->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(691, 80);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Lesson 1 : vocabulary";
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->AutoSize = true;
			this->button9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button9->Location = System::Drawing::Point(1998, 1181);
			this->button9->MaximumSize = System::Drawing::Size(400, 200);
			this->button9->MinimumSize = System::Drawing::Size(136, 60);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(240, 107);
			this->button9->TabIndex = 43;
			this->button9->Text = L"Next";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// next
			// 
			this->next->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->next->AutoSize = true;
			this->next->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->next->Location = System::Drawing::Point(1572, 897);
			this->next->MaximumSize = System::Drawing::Size(400, 200);
			this->next->MinimumSize = System::Drawing::Size(136, 60);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(320, 132);
			this->next->TabIndex = 48;
			this->next->Text = L"Next";
			this->next->UseVisualStyleBackColor = true;
			this->next->Click += gcnew System::EventHandler(this, &MyForm::next_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(473, 955);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(1000, 35);
			this->progressBar1->TabIndex = 47;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(687, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 102);
			this->label2->TabIndex = 49;
			this->label2->Text = L"是";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
			this->label3->Location = System::Drawing::Point(710, 368);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 46);
			this->label3->TabIndex = 50;
			this->label3->Text = L"shì";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
			this->label4->Location = System::Drawing::Point(710, 414);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 46);
			this->label4->TabIndex = 51;
			this->label4->Text = L"คือ เป็น\t";
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(718, 463);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 63);
			this->button6->TabIndex = 52;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(670, 598);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 39);
			this->label5->TabIndex = 53;
			this->label5->Text = L"他是老师。";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(670, 646);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(204, 39);
			this->label6->TabIndex = 54;
			this->label6->Text = L"tā shì lǎo shī";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(670, 697);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 39);
			this->label7->TabIndex = 55;
			this->label7->Text = L"เขาคือคุณครู";
			// 
			// pic1
			// 
			this->pic1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic1.BackgroundImage")));
			this->pic1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic1->Location = System::Drawing::Point(892, 552);
			this->pic1->Name = L"pic1";
			this->pic1->Size = System::Drawing::Size(366, 244);
			this->pic1->TabIndex = 56;
			this->pic1->TabStop = false;
			// 
			// pic2
			// 
			this->pic2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic2.BackgroundImage")));
			this->pic2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic2->Location = System::Drawing::Point(892, 249);
			this->pic2->Name = L"pic2";
			this->pic2->Size = System::Drawing::Size(276, 218);
			this->pic2->TabIndex = 57;
			this->pic2->TabStop = false;
			this->pic2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pic3
			// 
			this->pic3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic3.BackgroundImage")));
			this->pic3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic3->Location = System::Drawing::Point(959, 249);
			this->pic3->Name = L"pic3";
			this->pic3->Size = System::Drawing::Size(290, 277);
			this->pic3->TabIndex = 58;
			this->pic3->TabStop = false;
			// 
			// pic4
			// 
			this->pic4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic4.BackgroundImage")));
			this->pic4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic4->Location = System::Drawing::Point(1002, 552);
			this->pic4->Name = L"pic4";
			this->pic4->Size = System::Drawing::Size(256, 244);
			this->pic4->TabIndex = 59;
			this->pic4->TabStop = false;
			// 
			// pic5
			// 
			this->pic5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic5.BackgroundImage")));
			this->pic5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic5->Location = System::Drawing::Point(959, 273);
			this->pic5->Name = L"pic5";
			this->pic5->Size = System::Drawing::Size(384, 253);
			this->pic5->TabIndex = 60;
			this->pic5->TabStop = false;
			// 
			// pic8
			// 
			this->pic8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic8.BackgroundImage")));
			this->pic8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic8->Location = System::Drawing::Point(959, 552);
			this->pic8->Name = L"pic8";
			this->pic8->Size = System::Drawing::Size(303, 256);
			this->pic8->TabIndex = 61;
			this->pic8->TabStop = false;
			// 
			// pic7
			// 
			this->pic7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic7.BackgroundImage")));
			this->pic7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic7->Location = System::Drawing::Point(959, 249);
			this->pic7->Name = L"pic7";
			this->pic7->Size = System::Drawing::Size(299, 277);
			this->pic7->TabIndex = 62;
			this->pic7->TabStop = false;
			// 
			// pic6
			// 
			this->pic6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic6.BackgroundImage")));
			this->pic6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic6->Location = System::Drawing::Point(959, 552);
			this->pic6->Name = L"pic6";
			this->pic6->Size = System::Drawing::Size(364, 256);
			this->pic6->TabIndex = 63;
			this->pic6->TabStop = false;
			// 
			// pic9
			// 
			this->pic9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic9.BackgroundImage")));
			this->pic9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic9->Location = System::Drawing::Point(959, 249);
			this->pic9->Name = L"pic9";
			this->pic9->Size = System::Drawing::Size(299, 277);
			this->pic9->TabIndex = 64;
			this->pic9->TabStop = false;
			// 
			// pic10
			// 
			this->pic10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic10.BackgroundImage")));
			this->pic10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic10->Location = System::Drawing::Point(1022, 552);
			this->pic10->Name = L"pic10";
			this->pic10->Size = System::Drawing::Size(364, 256);
			this->pic10->TabIndex = 65;
			this->pic10->TabStop = false;
			// 
			// pic11
			// 
			this->pic11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic11.BackgroundImage")));
			this->pic11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic11->Location = System::Drawing::Point(959, 249);
			this->pic11->Name = L"pic11";
			this->pic11->Size = System::Drawing::Size(303, 277);
			this->pic11->TabIndex = 66;
			this->pic11->TabStop = false;
			// 
			// pic12
			// 
			this->pic12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic12.BackgroundImage")));
			this->pic12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic12->Location = System::Drawing::Point(1022, 552);
			this->pic12->Name = L"pic12";
			this->pic12->Size = System::Drawing::Size(364, 256);
			this->pic12->TabIndex = 67;
			this->pic12->TabStop = false;
			// 
			// pic13
			// 
			this->pic13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic13.BackgroundImage")));
			this->pic13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic13->Location = System::Drawing::Point(959, 249);
			this->pic13->Name = L"pic13";
			this->pic13->Size = System::Drawing::Size(303, 277);
			this->pic13->TabIndex = 68;
			this->pic13->TabStop = false;
			// 
			// pic14
			// 
			this->pic14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic14.BackgroundImage")));
			this->pic14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic14->Location = System::Drawing::Point(1069, 552);
			this->pic14->Name = L"pic14";
			this->pic14->Size = System::Drawing::Size(404, 256);
			this->pic14->TabIndex = 69;
			this->pic14->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->pic14);
			this->Controls->Add(this->pic13);
			this->Controls->Add(this->pic12);
			this->Controls->Add(this->pic11);
			this->Controls->Add(this->pic10);
			this->Controls->Add(this->pic9);
			this->Controls->Add(this->pic6);
			this->Controls->Add(this->pic7);
			this->Controls->Add(this->pic8);
			this->Controls->Add(this->pic5);
			this->Controls->Add(this->pic4);
			this->Controls->Add(this->pic3);
			this->Controls->Add(this->pic2);
			this->Controls->Add(this->pic1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->next);
			this->Controls->Add(this->progressBar1);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1030);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic14))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void changepage(int numpage) {
		switch (numpage) {
		case 1:
			label2->Text = L"是";
			label3->Text = L"shì";
			label4->Text = L"คือ เป็น	";
			label5->Text = L"他是老师。	";
			label6->Text = L"tā shì lǎo shī";
			label7->Text = L"เขาคือคุณครู";
			pic1->Show();
			pic2->Show();
			pic3->Hide();
			pic4->Hide();
			pic5->Hide();
			pic6->Hide();
			pic7->Hide();
			pic8->Hide();
			pic9->Hide();
			pic10->Hide();
			pic11->Hide();
			pic12->Hide();
			pic13->Hide();
			pic14->Hide();
			break;

		case 2: 
			label2->Text = L"大";
			label3->Text = L"dà";
			label4->Text = L"ใหญ่";
			label5->Text = L"这个苹果很大。";
			label6->Text = L"Zhègepíngguǒhěndà";
			label7->Text = L"แอปเปิ้ลลูกนี้ใหญ่มาก";
			//pic1->Hide();
			//pic2->Hide();
			pic3->Show();
			pic4->Show();
			//pic5->Hide();
			//pic6->Hide();
			break;

		case 3:
			label2->Text = L"什么";
			label3->Text = L"shénme";
			label4->Text = L"อะไร";
			label5->Text = L"你做什么？";
			label6->Text = L"Nǐzuòshénme";
			label7->Text = L"คุณทำอะไร";
			//pic3->Hide();
			//pic4->Hide();
			pic5->Show();
			pic6->Show();
			//pic7->Hide();
			//pic8->Hide();
			break;
		case 4:
			label2->Text = L"不";
			label3->Text = L"bù";
			label4->Text = L"ไม่";
			label5->Text = L"我不是大夫。";
			label6->Text = L"Wǒbùshìdàifu";
			label7->Text = L"ฉันไม่ใช่หมอ";
			//pic5->Hide();
			//pic6->Hide();
			pic7->Show();
			pic8->Show();
			//pic9->Hide();
			//pic10->Hide();
			break;
		case 5:
			label2->Text = L"做";
			label3->Text = L"zuò";
			label4->Text = L"ทำ";
			label5->Text = L"我每天做作业。";
			label6->Text = L"Wǒměitiānzuòzuòyè";
			label7->Text = L"ฉันทำการบ้านทุกวัน";
			//pic7->Hide();
			//pic8->Hide();
			pic9->Show();
			pic10->Show();
			//pic11->Hide();
			//pic12->Hide();
			break;
		case 6:
			label2->Text = L"你好";
			label3->Text = L"nǐhǎo";
			label4->Text = L"สวัสดี";
			label5->Text = L"A: 你好     B:你好";
			label6->Text = L"A: nǐhǎo   B:nǐhǎo";
			label7->Text = L"A:สวัสดี      B:สวัสดี";
			//pic9->Hide();
			//pic10->Hide();
			pic11->Show();
			pic12->Show();
			//pic13->Hide();
			//pic14->Hide();
			break;
		case 7:
			label2->Text = L"谢谢";
			label3->Text = L"xiè xiè";
			label4->Text = L"ขอบคุณ";
			label5->Text = L"A: 谢谢你!     B:不客气";
			label6->Text = L"A: xièxiènǐ     B: bùkèqì";
			label7->Text = L"A:ขอบคุณ        B:ไม่เป็นไร";
			//pic11->Hide();
			//pic12->Hide();
			pic13->Show();
			pic14->Show();
			break;
		}
		
	
	}
private: System::Void next_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numpage < 7) {
		numpage++;
		pic1->Hide();
		pic2->Hide();
		pic3->Hide();
		pic4->Hide();
		pic5->Hide();
		pic6->Hide();
		pic7->Hide();
		pic8->Hide();
		pic9->Hide();
		pic10->Hide();
		pic11->Hide();
		pic12->Hide();
		pic13->Hide();
		pic14->Hide();
		changepage(numpage);

	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numpage > 1) {
		numpage--;
		pic1->Hide();
		pic2->Hide();
		pic3->Hide();
		pic4->Hide();
		pic5->Hide();
		pic6->Hide();
		pic7->Hide();
		pic8->Hide();
		pic9->Hide();
		pic10->Hide();
		pic11->Hide();
		pic12->Hide();
		pic13->Hide();
		pic14->Hide();
		changepage(numpage);
		
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}