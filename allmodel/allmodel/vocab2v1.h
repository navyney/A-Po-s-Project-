#pragma once
#include <iostream>
#include <windows.h>
#include "mmSystem.h"

namespace allmodel {


		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for vocab2v1
		/// </summary>
		public ref class vocab2v1 : public System::Windows::Forms::Form
		{
			int numpages = 1;
		public:
			vocab2v1(void)
			{
				InitializeComponent();
				changepag(numpages);
				//
				//TODO: Add the constructor code here
				//
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~vocab2v1()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::PictureBox^ pictureBox3;
		protected:
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::PictureBox^ nextbutton;
		private: System::Windows::Forms::PictureBox^ previousbutton;
		private: System::Windows::Forms::ProgressBar^ progressBar2;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Button^ button6;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Button^ button8;
		private: System::Windows::Forms::Button^ button9;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ lesson3;
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ decorleft;
		private: System::Windows::Forms::PictureBox^ pic1;

		private: System::Windows::Forms::PictureBox^ pic2;
		private: System::Windows::Forms::PictureBox^ pictureBox4;
		private: System::Windows::Forms::PictureBox^ pic3;
		private: System::Windows::Forms::PictureBox^ pic4;
		private: System::Windows::Forms::PictureBox^ pic5;
		private: System::Windows::Forms::PictureBox^ pic6;
		private: System::Windows::Forms::PictureBox^ pic8;
		private: System::Windows::Forms::PictureBox^ pic7;
		private: System::Windows::Forms::PictureBox^ pic9;
		private: System::Windows::Forms::PictureBox^ pic10;
		private: System::Windows::Forms::PictureBox^ pic11;
		private: System::Windows::Forms::PictureBox^ pic13;

		private: System::Windows::Forms::PictureBox^ pic12;
		private: System::Windows::Forms::PictureBox^ pic14;


		private: System::Windows::Forms::PictureBox^ pic15;
		private: System::Windows::Forms::PictureBox^ pic16;
		private: System::Windows::Forms::PictureBox^ pic17;
		private: System::Windows::Forms::PictureBox^ pic18;
		private: System::Windows::Forms::PictureBox^ pic19;
		private: System::Windows::Forms::PictureBox^ pic20;
		private: System::Windows::Forms::PictureBox^ pic21;
		private: System::Windows::Forms::PictureBox^ pic22;
		private: System::Windows::Forms::PictureBox^ pic23;
		private: System::Windows::Forms::PictureBox^ pic24;
		private: System::Windows::Forms::PictureBox^ pic25;
		private: System::Windows::Forms::PictureBox^ pic26;
		private: System::Windows::Forms::PictureBox^ pic27;
		private: System::Windows::Forms::PictureBox^ pic28;














		protected:







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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(vocab2v1::typeid));
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->nextbutton = (gcnew System::Windows::Forms::PictureBox());
				this->previousbutton = (gcnew System::Windows::Forms::PictureBox());
				this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
				this->label7 = (gcnew System::Windows::Forms::Label());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->button6 = (gcnew System::Windows::Forms::Button());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->button8 = (gcnew System::Windows::Forms::Button());
				this->button9 = (gcnew System::Windows::Forms::Button());
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->lesson3 = (gcnew System::Windows::Forms::Label());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->decorleft = (gcnew System::Windows::Forms::PictureBox());
				this->pic1 = (gcnew System::Windows::Forms::PictureBox());
				this->pic2 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
				this->pic3 = (gcnew System::Windows::Forms::PictureBox());
				this->pic4 = (gcnew System::Windows::Forms::PictureBox());
				this->pic5 = (gcnew System::Windows::Forms::PictureBox());
				this->pic6 = (gcnew System::Windows::Forms::PictureBox());
				this->pic8 = (gcnew System::Windows::Forms::PictureBox());
				this->pic7 = (gcnew System::Windows::Forms::PictureBox());
				this->pic9 = (gcnew System::Windows::Forms::PictureBox());
				this->pic10 = (gcnew System::Windows::Forms::PictureBox());
				this->pic11 = (gcnew System::Windows::Forms::PictureBox());
				this->pic13 = (gcnew System::Windows::Forms::PictureBox());
				this->pic12 = (gcnew System::Windows::Forms::PictureBox());
				this->pic14 = (gcnew System::Windows::Forms::PictureBox());
				this->pic15 = (gcnew System::Windows::Forms::PictureBox());
				this->pic16 = (gcnew System::Windows::Forms::PictureBox());
				this->pic17 = (gcnew System::Windows::Forms::PictureBox());
				this->pic18 = (gcnew System::Windows::Forms::PictureBox());
				this->pic19 = (gcnew System::Windows::Forms::PictureBox());
				this->pic20 = (gcnew System::Windows::Forms::PictureBox());
				this->pic21 = (gcnew System::Windows::Forms::PictureBox());
				this->pic22 = (gcnew System::Windows::Forms::PictureBox());
				this->pic23 = (gcnew System::Windows::Forms::PictureBox());
				this->pic24 = (gcnew System::Windows::Forms::PictureBox());
				this->pic25 = (gcnew System::Windows::Forms::PictureBox());
				this->pic26 = (gcnew System::Windows::Forms::PictureBox());
				this->pic27 = (gcnew System::Windows::Forms::PictureBox());
				this->pic28 = (gcnew System::Windows::Forms::PictureBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic5))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic6))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic8))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic7))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic9))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic10))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic11))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic13))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic12))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic14))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic15))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic16))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic17))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic18))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic19))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic20))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic21))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic22))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic23))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic24))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic25))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic26))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic27))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic28))->BeginInit();
				this->SuspendLayout();
				// 
				// pictureBox3
				// 
				this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
				this->pictureBox3->Location = System::Drawing::Point(487, 576);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(960, 5);
				this->pictureBox3->TabIndex = 132;
				this->pictureBox3->TabStop = false;
				// 
				// button1
				// 
				this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
				this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button1->Location = System::Drawing::Point(577, 794);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(40, 40);
				this->button1->TabIndex = 130;
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &vocab2v1::button1_Click);
				// 
				// nextbutton
				// 
				this->nextbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextbutton.BackgroundImage")));
				this->nextbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->nextbutton->Location = System::Drawing::Point(1584, 896);
				this->nextbutton->Name = L"nextbutton";
				this->nextbutton->Size = System::Drawing::Size(282, 133);
				this->nextbutton->TabIndex = 129;
				this->nextbutton->TabStop = false;
				this->nextbutton->Click += gcnew System::EventHandler(this, &vocab2v1::nextbutton_Click);
				// 
				// previousbutton
				// 
				this->previousbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousbutton.BackgroundImage")));
				this->previousbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->previousbutton->Location = System::Drawing::Point(33, 896);
				this->previousbutton->Name = L"previousbutton";
				this->previousbutton->Size = System::Drawing::Size(300, 130);
				this->previousbutton->TabIndex = 128;
				this->previousbutton->TabStop = false;
				this->previousbutton->Click += gcnew System::EventHandler(this, &vocab2v1::previousbutton_Click);
				// 
				// progressBar2
				// 
				this->progressBar2->Location = System::Drawing::Point(443, 945);
				this->progressBar2->Name = L"progressBar2";
				this->progressBar2->Size = System::Drawing::Size(1000, 35);
				this->progressBar2->TabIndex = 125;
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label7->Location = System::Drawing::Point(525, 738);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(234, 47);
				this->label7->TabIndex = 98;
				this->label7->Text = L"เขาเรียนภาษาจีน";
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label6->Location = System::Drawing::Point(523, 688);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(274, 47);
				this->label6->TabIndex = 97;
				this->label6->Text = L"Tā xuéxí hànyǔ";
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label5->Location = System::Drawing::Point(524, 636);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(254, 47);
				this->label5->TabIndex = 96;
				this->label5->Text = L"他学习汉语。";
				// 
				// button6
				// 
				this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
				this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button6->Location = System::Drawing::Point(577, 501);
				this->button6->Name = L"button6";
				this->button6->Size = System::Drawing::Size(40, 40);
				this->button6->TabIndex = 95;
				this->button6->UseVisualStyleBackColor = true;
				this->button6->Click += gcnew System::EventHandler(this, &vocab2v1::button6_Click);
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
				this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label4->Location = System::Drawing::Point(564, 452);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(123, 46);
				this->label4->TabIndex = 94;
				this->label4->Text = L"ภาษาจีน";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
				this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label3->Location = System::Drawing::Point(564, 406);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(129, 46);
				this->label3->TabIndex = 93;
				this->label3->Text = L"hànyǔ";
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label2->Location = System::Drawing::Point(541, 287);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(280, 128);
				this->label2->TabIndex = 92;
				this->label2->Text = L"汉语";
				// 
				// button8
				// 
				this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
				this->button8->AutoSize = true;
				this->button8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
				this->button8->Location = System::Drawing::Point(173, 1180);
				this->button8->MaximumSize = System::Drawing::Size(400, 200);
				this->button8->MinimumSize = System::Drawing::Size(136, 60);
				this->button8->Name = L"button8";
				this->button8->Size = System::Drawing::Size(240, 107);
				this->button8->TabIndex = 90;
				this->button8->Text = L"Previous";
				this->button8->UseVisualStyleBackColor = true;
				// 
				// button9
				// 
				this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
				this->button9->AutoSize = true;
				this->button9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
				this->button9->Location = System::Drawing::Point(1998, 1180);
				this->button9->MaximumSize = System::Drawing::Size(400, 200);
				this->button9->MinimumSize = System::Drawing::Size(136, 60);
				this->button9->Name = L"button9";
				this->button9->Size = System::Drawing::Size(240, 107);
				this->button9->TabIndex = 91;
				this->button9->Text = L"Next";
				this->button9->UseVisualStyleBackColor = true;
				// 
				// label8
				// 
				this->label8->AutoSize = true;
				this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label8->Location = System::Drawing::Point(765, 159);
				this->label8->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(361, 82);
				this->label8->TabIndex = 124;
				this->label8->Text = L"Vocabulary";
				// 
				// lesson3
				// 
				this->lesson3->AutoSize = true;
				this->lesson3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 86.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lesson3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->lesson3->Location = System::Drawing::Point(457, 11);
				this->lesson3->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->lesson3->Name = L"lesson3";
				this->lesson3->Size = System::Drawing::Size(986, 148);
				this->lesson3->TabIndex = 123;
				this->lesson3->Text = L"Lesson 2 : Family";
				// 
				// pictureBox2
				// 
				this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
				this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox2->Location = System::Drawing::Point(468, 244);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(1000, 632);
				this->pictureBox2->TabIndex = 131;
				this->pictureBox2->TabStop = false;
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox1->Location = System::Drawing::Point(1442, 12);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(450, 450);
				this->pictureBox1->TabIndex = 127;
				this->pictureBox1->TabStop = false;
				// 
				// decorleft
				// 
				this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
				this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->decorleft->Location = System::Drawing::Point(12, 12);
				this->decorleft->Name = L"decorleft";
				this->decorleft->Size = System::Drawing::Size(450, 450);
				this->decorleft->TabIndex = 126;
				this->decorleft->TabStop = false;
				// 
				// pic1
				// 
				this->pic1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic1.BackgroundImage")));
				this->pic1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic1->Location = System::Drawing::Point(963, 287);
				this->pic1->Name = L"pic1";
				this->pic1->Size = System::Drawing::Size(290, 277);
				this->pic1->TabIndex = 133;
				this->pic1->TabStop = false;
				// 
				// pic2
				// 
				this->pic2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic2.BackgroundImage")));
				this->pic2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic2->Location = System::Drawing::Point(963, 587);
				this->pic2->Name = L"pic2";
				this->pic2->Size = System::Drawing::Size(290, 277);
				this->pic2->TabIndex = 134;
				this->pic2->TabStop = false;
				// 
				// pictureBox4
				// 
				this->pictureBox4->Location = System::Drawing::Point(0, 0);
				this->pictureBox4->Name = L"pictureBox4";
				this->pictureBox4->Size = System::Drawing::Size(100, 50);
				this->pictureBox4->TabIndex = 162;
				this->pictureBox4->TabStop = false;
				// 
				// pic3
				// 
				this->pic3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic3.BackgroundImage")));
				this->pic3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic3->Location = System::Drawing::Point(947, 287);
				this->pic3->Name = L"pic3";
				this->pic3->Size = System::Drawing::Size(353, 277);
				this->pic3->TabIndex = 136;
				this->pic3->TabStop = false;
				// 
				// pic4
				// 
				this->pic4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic4.BackgroundImage")));
				this->pic4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic4->Location = System::Drawing::Point(985, 587);
				this->pic4->Name = L"pic4";
				this->pic4->Size = System::Drawing::Size(268, 277);
				this->pic4->TabIndex = 137;
				this->pic4->TabStop = false;
				// 
				// pic5
				// 
				this->pic5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic5.BackgroundImage")));
				this->pic5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic5->Location = System::Drawing::Point(976, 287);
				this->pic5->Name = L"pic5";
				this->pic5->Size = System::Drawing::Size(263, 277);
				this->pic5->TabIndex = 138;
				this->pic5->TabStop = false;
				// 
				// pic6
				// 
				this->pic6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic6.BackgroundImage")));
				this->pic6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic6->Location = System::Drawing::Point(985, 587);
				this->pic6->Name = L"pic6";
				this->pic6->Size = System::Drawing::Size(279, 277);
				this->pic6->TabIndex = 139;
				this->pic6->TabStop = false;
				// 
				// pic8
				// 
				this->pic8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic8.BackgroundImage")));
				this->pic8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic8->Location = System::Drawing::Point(995, 587);
				this->pic8->Name = L"pic8";
				this->pic8->Size = System::Drawing::Size(279, 277);
				this->pic8->TabIndex = 140;
				this->pic8->TabStop = false;
				// 
				// pic7
				// 
				this->pic7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic7.BackgroundImage")));
				this->pic7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic7->Location = System::Drawing::Point(995, 287);
				this->pic7->Name = L"pic7";
				this->pic7->Size = System::Drawing::Size(203, 277);
				this->pic7->TabIndex = 141;
				this->pic7->TabStop = false;
				// 
				// pic9
				// 
				this->pic9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic9.BackgroundImage")));
				this->pic9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic9->Location = System::Drawing::Point(995, 287);
				this->pic9->Name = L"pic9";
				this->pic9->Size = System::Drawing::Size(203, 277);
				this->pic9->TabIndex = 142;
				this->pic9->TabStop = false;
				// 
				// pic10
				// 
				this->pic10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic10.BackgroundImage")));
				this->pic10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic10->Location = System::Drawing::Point(1036, 587);
				this->pic10->Name = L"pic10";
				this->pic10->Size = System::Drawing::Size(203, 277);
				this->pic10->TabIndex = 143;
				this->pic10->TabStop = false;
				// 
				// pic11
				// 
				this->pic11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic11.BackgroundImage")));
				this->pic11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic11->Location = System::Drawing::Point(995, 287);
				this->pic11->Name = L"pic11";
				this->pic11->Size = System::Drawing::Size(203, 277);
				this->pic11->TabIndex = 144;
				this->pic11->TabStop = false;
				// 
				// pic13
				// 
				this->pic13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic13.BackgroundImage")));
				this->pic13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic13->Location = System::Drawing::Point(995, 287);
				this->pic13->Name = L"pic13";
				this->pic13->Size = System::Drawing::Size(203, 277);
				this->pic13->TabIndex = 145;
				this->pic13->TabStop = false;
				// 
				// pic12
				// 
				this->pic12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic12.BackgroundImage")));
				this->pic12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic12->Location = System::Drawing::Point(995, 587);
				this->pic12->Name = L"pic12";
				this->pic12->Size = System::Drawing::Size(279, 277);
				this->pic12->TabIndex = 146;
				this->pic12->TabStop = false;
				// 
				// pic14
				// 
				this->pic14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic14.BackgroundImage")));
				this->pic14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic14->Location = System::Drawing::Point(985, 587);
				this->pic14->Name = L"pic14";
				this->pic14->Size = System::Drawing::Size(279, 277);
				this->pic14->TabIndex = 147;
				this->pic14->TabStop = false;
				// 
				// pic15
				// 
				this->pic15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic15.BackgroundImage")));
				this->pic15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic15->Location = System::Drawing::Point(995, 287);
				this->pic15->Name = L"pic15";
				this->pic15->Size = System::Drawing::Size(226, 277);
				this->pic15->TabIndex = 148;
				this->pic15->TabStop = false;
				// 
				// pic16
				// 
				this->pic16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic16.BackgroundImage")));
				this->pic16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic16->Location = System::Drawing::Point(1007, 587);
				this->pic16->Name = L"pic16";
				this->pic16->Size = System::Drawing::Size(305, 277);
				this->pic16->TabIndex = 149;
				this->pic16->TabStop = false;
				// 
				// pic17
				// 
				this->pic17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic17.BackgroundImage")));
				this->pic17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic17->Location = System::Drawing::Point(995, 287);
				this->pic17->Name = L"pic17";
				this->pic17->Size = System::Drawing::Size(226, 277);
				this->pic17->TabIndex = 150;
				this->pic17->TabStop = false;
				// 
				// pic18
				// 
				this->pic18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic18.BackgroundImage")));
				this->pic18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic18->Location = System::Drawing::Point(1023, 587);
				this->pic18->Name = L"pic18";
				this->pic18->Size = System::Drawing::Size(309, 277);
				this->pic18->TabIndex = 151;
				this->pic18->TabStop = false;
				// 
				// pic19
				// 
				this->pic19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic19.BackgroundImage")));
				this->pic19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic19->Location = System::Drawing::Point(1007, 287);
				this->pic19->Name = L"pic19";
				this->pic19->Size = System::Drawing::Size(283, 277);
				this->pic19->TabIndex = 152;
				this->pic19->TabStop = false;
				// 
				// pic20
				// 
				this->pic20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic20.BackgroundImage")));
				this->pic20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic20->Location = System::Drawing::Point(1127, 587);
				this->pic20->Name = L"pic20";
				this->pic20->Size = System::Drawing::Size(283, 277);
				this->pic20->TabIndex = 153;
				this->pic20->TabStop = false;
				// 
				// pic21
				// 
				this->pic21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic21.BackgroundImage")));
				this->pic21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic21->Location = System::Drawing::Point(1007, 287);
				this->pic21->Name = L"pic21";
				this->pic21->Size = System::Drawing::Size(283, 277);
				this->pic21->TabIndex = 154;
				this->pic21->TabStop = false;
				// 
				// pic22
				// 
				this->pic22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic22.BackgroundImage")));
				this->pic22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic22->Location = System::Drawing::Point(1049, 587);
				this->pic22->Name = L"pic22";
				this->pic22->Size = System::Drawing::Size(283, 277);
				this->pic22->TabIndex = 155;
				this->pic22->TabStop = false;
				// 
				// pic23
				// 
				this->pic23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic23.BackgroundImage")));
				this->pic23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic23->Location = System::Drawing::Point(995, 287);
				this->pic23->Name = L"pic23";
				this->pic23->Size = System::Drawing::Size(283, 277);
				this->pic23->TabIndex = 156;
				this->pic23->TabStop = false;
				// 
				// pic24
				// 
				this->pic24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic24.BackgroundImage")));
				this->pic24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic24->Location = System::Drawing::Point(1036, 587);
				this->pic24->Name = L"pic24";
				this->pic24->Size = System::Drawing::Size(283, 277);
				this->pic24->TabIndex = 157;
				this->pic24->TabStop = false;
				// 
				// pic25
				// 
				this->pic25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic25.BackgroundImage")));
				this->pic25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic25->Location = System::Drawing::Point(985, 287);
				this->pic25->Name = L"pic25";
				this->pic25->Size = System::Drawing::Size(283, 277);
				this->pic25->TabIndex = 158;
				this->pic25->TabStop = false;
				// 
				// pic26
				// 
				this->pic26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic26.BackgroundImage")));
				this->pic26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic26->Location = System::Drawing::Point(1216, 596);
				this->pic26->Name = L"pic26";
				this->pic26->Size = System::Drawing::Size(236, 262);
				this->pic26->TabIndex = 159;
				this->pic26->TabStop = false;
				// 
				// pic27
				// 
				this->pic27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic27.BackgroundImage")));
				this->pic27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic27->Location = System::Drawing::Point(976, 287);
				this->pic27->Name = L"pic27";
				this->pic27->Size = System::Drawing::Size(283, 277);
				this->pic27->TabIndex = 160;
				this->pic27->TabStop = false;
				// 
				// pic28
				// 
				this->pic28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic28.BackgroundImage")));
				this->pic28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic28->Location = System::Drawing::Point(963, 587);
				this->pic28->Name = L"pic28";
				this->pic28->Size = System::Drawing::Size(283, 277);
				this->pic28->TabIndex = 161;
				this->pic28->TabStop = false;
				// 
				// vocab2v1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1904, 1041);
				this->Controls->Add(this->pic28);
				this->Controls->Add(this->pic27);
				this->Controls->Add(this->pic26);
				this->Controls->Add(this->pic25);
				this->Controls->Add(this->pic24);
				this->Controls->Add(this->pic23);
				this->Controls->Add(this->pic22);
				this->Controls->Add(this->pic21);
				this->Controls->Add(this->pic20);
				this->Controls->Add(this->pic19);
				this->Controls->Add(this->pic18);
				this->Controls->Add(this->pic17);
				this->Controls->Add(this->pic16);
				this->Controls->Add(this->pic15);
				this->Controls->Add(this->pic14);
				this->Controls->Add(this->pic12);
				this->Controls->Add(this->pic13);
				this->Controls->Add(this->pic11);
				this->Controls->Add(this->pic10);
				this->Controls->Add(this->pic9);
				this->Controls->Add(this->pic7);
				this->Controls->Add(this->pic8);
				this->Controls->Add(this->pic6);
				this->Controls->Add(this->pic5);
				this->Controls->Add(this->pic4);
				this->Controls->Add(this->pic3);
				this->Controls->Add(this->pictureBox4);
				this->Controls->Add(this->pic2);
				this->Controls->Add(this->pic1);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->nextbutton);
				this->Controls->Add(this->previousbutton);
				this->Controls->Add(this->progressBar2);
				this->Controls->Add(this->label7);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->button6);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->button8);
				this->Controls->Add(this->button9);
				this->Controls->Add(this->label8);
				this->Controls->Add(this->pictureBox2);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->decorleft);
				this->Controls->Add(this->lesson3);
				this->Name = L"vocab2v1";
				this->Text = L"vocab2v1";
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic5))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic6))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic8))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic7))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic9))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic10))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic11))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic13))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic12))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic14))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic15))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic16))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic17))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic18))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic19))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic20))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic21))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic22))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic23))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic24))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic25))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic26))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic27))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic28))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		private: System::Void changepag(int numpages) {
			switch (numpages) {
			case 1:
				label2->Text = L"汉语";
				label3->Text = L"hànyǔ";
				label4->Text = L"ภาษาจีน";
				label5->Text = L"他学习汉语。";
				label6->Text = L"Tā xuéxí hànyǔ";
				label7->Text = L"เขาเรียนภาษาจีน";
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
				pic15->Hide();
				pic16->Hide();
				pic17->Hide();
				pic18->Hide();
				pic19->Hide();
				pic20->Hide();
				pic21->Hide();
				pic22->Hide();
				pic23->Hide();
				pic24->Hide();
				pic25->Hide();
				pic26->Hide();
				pic27->Hide();
				pic28->Hide();
				break;
			case 2:
				label2->Text = L"爸爸";
				label3->Text = L"bàba";
				label4->Text = L"พ่อ";
				label5->Text = L"我爸爸是医生。";
				label6->Text = L"Wǒ bàbà shì yīshēng";
				label7->Text = L"พ่อของฉันเป็นหมอ";
				pic3->Show();
				pic4->Show();
				break;
			case 3:
				label2->Text = L"妈妈";
				label3->Text = L"māmā";
				label4->Text = L"แม่";
				label5->Text = L"我妈妈不在家。";
				label6->Text = L"Wǒ māmā bù zài jiā";
				label7->Text = L"แม่ของฉันไม่อยู่บ้าน";
				pic5->Show();
				pic6->Show();
				break;
			case 4:
				label2->Text = L"哥哥";
				label3->Text = L"gēge";
				label4->Text = L"พี่ชาย";
				label5->Text = L"我哥哥比我大三岁。";
				label6->Text = L"Wǒ gēgē bǐ wǒdà sān suì";
				label7->Text = L"พี่ของฉันอายุมากว่าฉันสามปี";
				pic7->Show();
				pic8->Show();
				break;
			case 5:
				label2->Text = L"弟弟";
				label3->Text = L"dìdi";
				label4->Text = L"น้องชาย";
				label5->Text = L"我有两个弟弟。";
				label6->Text = L"Wǒ hái yǒu liǎng gè dìdì";
				label7->Text = L"ฉันมีน้องชายสองคน";
				pic9->Show();
				pic10->Show();
				break;
			case 6:
				label2->Text = L"妹妹";
				label3->Text = L"mèimèi";
				label4->Text = L"น้องสาว";
				label5->Text = L"我妹妹喜欢白色。";
				label6->Text = L"Wǒ mèimèi xǐhuān báisè";
				label7->Text = L"น้องสาวของฉันชอบสีขาว";
				pic11->Show();
				pic12->Show();
				break;
			case 7:
				label2->Text = L"姐姐";
				label3->Text = L"jiějiě";
				label4->Text = L"พี่สาว";
				label5->Text = L"我有两个姐姐。";
				label6->Text = L"Wǒ yǒu liǎng gè jiějiě";
				label7->Text = L"ฉันมีพี่สาวสองคน";
				pic13->Show();
				pic14->Show();
				break;
			case 8:
				label2->Text = L"他";
				label3->Text = L"tā";
				label4->Text = L"เขา (ผู้ชาย) ";
				label5->Text = L"他是我们的老师。";
				label6->Text = L"Tā shì wǒmén de lǎoshī ";
				label7->Text = L"เขาคือคุณครูของพวกเรา";
				pic15->Show();
				pic16->Show();
				break;

			case 9:
				label2->Text = L"她";
				label3->Text = L"tā";
				label4->Text = L"เขาผู้หญิง";
				label5->Text = L"我认识她的妈妈。";
				label6->Text = L"Wǒ rènshí tā de māmā";
				label7->Text = L"ฉันรู้จักแม่ของเขา";
				pic17->Show();
				pic18->Show();
				break;
			case 10:
				label2->Text = L"老师";
				label3->Text = L"lǎoshī";
				label4->Text = L"คุณครู";
				label5->Text = L"他就是我们的科学老师。";
				label6->Text = L"Tā jiù shì wǒmén de kēxué lǎoshī";
				label7->Text = L"เขาก็คือคุณครูวิทยาศาสตร์ของพวกเรา";
				pic19->Show();
				pic20->Show();
				break;
			case 11:
				label2->Text = L"喜欢";
				label3->Text = L"xǐhuān";
				label4->Text = L"ชอบ";
				label5->Text = L"我喜欢吃面条。";
				label6->Text = L"Wǒ xǐhuān chī miàntiáo";
				label7->Text = L"ฉันชอบกินก๋วยเตี๋ยว";
				pic21->Show();
				pic22->Show();
				break;
			case 12:
				label2->Text = L"医生";
				label3->Text = L"yīshēng";
				label4->Text = L"หมอ";
				label5->Text = L"李医生在医院吗。";
				label6->Text = L"Lǐ yīshēng zài yīyuàn má";
				label7->Text = L"หมอลี่อยู่โรงพยาบาลมั้ย";
				pic23->Show();
				pic24->Show();
				break;
			case 13:
				label2->Text = L"学生";
				label3->Text = L"xuéshēng";
				label4->Text = L"นักเรียน";
				label5->Text = L"我们学校里的学生很多。";
				label6->Text = L"Wǒmén xuéxiào lǐ de xuéshēng hěn duō";
				label7->Text = L"ข้างในโรงเรียนของฉันมีนักเรียนเยอะ";
				pic25->Show();
				pic26->Show();
				break;
			case 14:
				label2->Text = L"学";
				label3->Text = L"xué";
				label4->Text = L"เรียน";
				label5->Text = L"他学韩语。";
				label6->Text = L"Tā xué hányǔ";
				label7->Text = L"เขาเรียนภาษาเกาหลี";
				pic27->Show();
				pic28->Show();
				break;
			}

		}
		public:bool switchToformHQ1 = false;
		public:bool switchToformcon2 = false;
		private: System::Void nextbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (numpages < 14) {
				numpages++;
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
				pic15->Hide();
				pic16->Hide();
				pic17->Hide();
				pic18->Hide();
				pic19->Hide();
				pic20->Hide();
				pic21->Hide();
				pic22->Hide();
				pic23->Hide();
				pic24->Hide();
				pic25->Hide();
				pic26->Hide();
				pic27->Hide();
				pic28->Hide();
				changepag(numpages);
			}
			else {
				this->Close();
				switchToformcon2 = true;
			}
		}
		private: System::Void previousbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (numpages > 1) {
				numpages--;
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
				pic15->Hide();
				pic16->Hide();
				pic17->Hide();
				pic18->Hide();
				pic19->Hide();
				pic20->Hide();
				pic21->Hide();
				pic22->Hide();
				pic23->Hide();
				pic24->Hide();
				pic25->Hide();
				pic26->Hide();
				pic27->Hide();
				pic28->Hide();
				changepag(numpages);
			}
			else {
				this->Close();
				switchToformHQ1 = true;
			}
		}

		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			switch (numpages) {
			case 1:
				PlaySound(TEXT("汉语.wav"), NULL, SND_SYNC);
				break;
			case 2:
				PlaySound(TEXT("爸爸.wav"), NULL, SND_SYNC);
				break;
			case 3:
				PlaySound(TEXT("妈妈.wav"), NULL, SND_SYNC);
				break;
			case 4:
				PlaySound(TEXT("哥哥.wav"), NULL, SND_SYNC);
				break;
			case 5:
				PlaySound(TEXT("弟弟.wav"), NULL, SND_SYNC);
				break;
			case 6:
				PlaySound(TEXT("妹妹.wav"), NULL, SND_SYNC);
				break;
			case 7:
				PlaySound(TEXT("姐姐.wav"), NULL, SND_SYNC);
				break;
			case 8:
				PlaySound(TEXT("他.wav"), NULL, SND_SYNC);
				break;
			case 9:
				PlaySound(TEXT("她.wav"), NULL, SND_SYNC);
				break;
			case 10:
				PlaySound(TEXT("老师.wav"), NULL, SND_SYNC);
				break;
			case 11:
				PlaySound(TEXT("喜欢.wav"), NULL, SND_SYNC);
				break;
			case 12:
				PlaySound(TEXT("医生.wav"), NULL, SND_SYNC);
				break;
			case 13:
				PlaySound(TEXT("学生.wav"), NULL, SND_SYNC);
				break;
			case 14:
				PlaySound(TEXT("学.wav"), NULL, SND_SYNC);
				break;
			}
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			switch (numpages) {
			case 1:
				PlaySound(TEXT("他学习汉语.wav"), NULL, SND_SYNC);
				break;
			case 2:
				PlaySound(TEXT("我爸爸是医生.wav"), NULL, SND_SYNC);
				break;
			case 3:
				PlaySound(TEXT("我妈妈不在家.wav"), NULL, SND_SYNC);
				break;
			case 4:
				PlaySound(TEXT("我哥哥比我大三岁.wav"), NULL, SND_SYNC);
				break;
			case 5:
				PlaySound(TEXT("我有两个弟弟 (online-audio-converter.com).wav"), NULL, SND_SYNC);
				break;
			case 6:
				PlaySound(TEXT("我妹妹喜欢白色 (online-audio-converter.com).wav"), NULL, SND_SYNC);
				break;
			case 7:
				PlaySound(TEXT("我有两个姐姐.wav"), NULL, SND_SYNC);
				break;
			case 8:
				PlaySound(TEXT("他是我们的老师.wav"), NULL, SND_SYNC);
				break;
			case 9:
				PlaySound(TEXT("我认识她的妈妈.wav"), NULL, SND_SYNC);
				break;
			case 10:
				PlaySound(TEXT("他就是我们的科学老师.wav"), NULL, SND_SYNC);
				break;
			case 11:
				PlaySound(TEXT("我喜欢吃面条.wav"), NULL, SND_SYNC);
				break;
			case 12:
				PlaySound(TEXT("李医生在医院吗.wav"), NULL, SND_SYNC);
				break;
			case 13:
				PlaySound(TEXT("我们学校里的学生很多.wav"), NULL, SND_SYNC);
				break;
			case 14:
				PlaySound(TEXT("他学韩语.wav"), NULL, SND_SYNC);
				break;
			}
		}
};
	}