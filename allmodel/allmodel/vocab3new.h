﻿#pragma once

namespace allmodel {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for vocab3new
		/// </summary>
		public ref class vocab3new : public System::Windows::Forms::Form
		{
			int numpage2 = 1;
		public:
			vocab3new(void)
			{
				InitializeComponent();
				changepage(numpage2);
				//
				//TODO: Add the constructor code here
				//
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~vocab3new()
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
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ decorleft;
		private: System::Windows::Forms::Label^ lesson3;
		private: System::Windows::Forms::PictureBox^ pic1;
		private: System::Windows::Forms::PictureBox^ pic2;
		private: System::Windows::Forms::PictureBox^ pic3;
		private: System::Windows::Forms::PictureBox^ pic4;
		private: System::Windows::Forms::PictureBox^ pic6;
		private: System::Windows::Forms::PictureBox^ pic5;
		private: System::Windows::Forms::PictureBox^ pic7;
		private: System::Windows::Forms::PictureBox^ pic8;
		private: System::Windows::Forms::PictureBox^ pic9;
		private: System::Windows::Forms::PictureBox^ pic10;
		private: System::Windows::Forms::PictureBox^ pic12;
		private: System::Windows::Forms::PictureBox^ pic11;
		private: System::Windows::Forms::PictureBox^ pic13;
		private: System::Windows::Forms::PictureBox^ pic14;
		private: System::Windows::Forms::PictureBox^ pic16;
		private: System::Windows::Forms::PictureBox^ pic15;
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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(vocab3new::typeid));
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
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->decorleft = (gcnew System::Windows::Forms::PictureBox());
				this->lesson3 = (gcnew System::Windows::Forms::Label());
				this->pic1 = (gcnew System::Windows::Forms::PictureBox());
				this->pic2 = (gcnew System::Windows::Forms::PictureBox());
				this->pic3 = (gcnew System::Windows::Forms::PictureBox());
				this->pic4 = (gcnew System::Windows::Forms::PictureBox());
				this->pic6 = (gcnew System::Windows::Forms::PictureBox());
				this->pic5 = (gcnew System::Windows::Forms::PictureBox());
				this->pic7 = (gcnew System::Windows::Forms::PictureBox());
				this->pic8 = (gcnew System::Windows::Forms::PictureBox());
				this->pic9 = (gcnew System::Windows::Forms::PictureBox());
				this->pic10 = (gcnew System::Windows::Forms::PictureBox());
				this->pic12 = (gcnew System::Windows::Forms::PictureBox());
				this->pic11 = (gcnew System::Windows::Forms::PictureBox());
				this->pic13 = (gcnew System::Windows::Forms::PictureBox());
				this->pic14 = (gcnew System::Windows::Forms::PictureBox());
				this->pic16 = (gcnew System::Windows::Forms::PictureBox());
				this->pic15 = (gcnew System::Windows::Forms::PictureBox());
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
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic6))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic5))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic7))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic8))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic9))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic10))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic12))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic11))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic13))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic14))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic16))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic15))->BeginInit();
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
				this->pictureBox3->TabIndex = 151;
				this->pictureBox3->TabStop = false;
				// 
				// button1
				// 
				this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
				this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button1->Location = System::Drawing::Point(577, 794);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(40, 40);
				this->button1->TabIndex = 149;
				this->button1->UseVisualStyleBackColor = true;
				// 
				// nextbutton
				// 
				this->nextbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextbutton.BackgroundImage")));
				this->nextbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->nextbutton->Location = System::Drawing::Point(1584, 896);
				this->nextbutton->Name = L"nextbutton";
				this->nextbutton->Size = System::Drawing::Size(282, 133);
				this->nextbutton->TabIndex = 148;
				this->nextbutton->TabStop = false;
				this->nextbutton->Click += gcnew System::EventHandler(this, &vocab3new::nextbutton_Click);
				// 
				// previousbutton
				// 
				this->previousbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousbutton.BackgroundImage")));
				this->previousbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->previousbutton->Location = System::Drawing::Point(33, 896);
				this->previousbutton->Name = L"previousbutton";
				this->previousbutton->Size = System::Drawing::Size(300, 130);
				this->previousbutton->TabIndex = 147;
				this->previousbutton->TabStop = false;
				this->previousbutton->Click += gcnew System::EventHandler(this, &vocab3new::previousbutton_Click);
				// 
				// progressBar2
				// 
				this->progressBar2->Location = System::Drawing::Point(443, 945);
				this->progressBar2->Name = L"progressBar2";
				this->progressBar2->Size = System::Drawing::Size(1000, 35);
				this->progressBar2->TabIndex = 144;
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
				this->label7->Size = System::Drawing::Size(251, 47);
				this->label7->TabIndex = 141;
				this->label7->Text = L"วันนี้ฉันไปเชี่ยงใหม่";
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
				this->label6->Size = System::Drawing::Size(403, 47);
				this->label6->TabIndex = 140;
				this->label6->Text = L"Wǒ jīn tiān qù qīngmài";
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
				this->label5->Size = System::Drawing::Size(279, 47);
				this->label5->TabIndex = 139;
				this->label5->Text = L"我今天去清迈。";
				// 
				// button6
				// 
				this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
				this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button6->Location = System::Drawing::Point(577, 501);
				this->button6->Name = L"button6";
				this->button6->Size = System::Drawing::Size(40, 40);
				this->button6->TabIndex = 138;
				this->button6->UseVisualStyleBackColor = true;
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
				this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label4->Location = System::Drawing::Point(564, 452);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(73, 46);
				this->label4->TabIndex = 137;
				this->label4->Text = L"วันนี้";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
				this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label3->Location = System::Drawing::Point(564, 406);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(145, 46);
				this->label3->TabIndex = 136;
				this->label3->Text = L"jīn tiān";
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
				this->label2->Size = System::Drawing::Size(246, 128);
				this->label2->TabIndex = 135;
				this->label2->Text = L"今天";
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
				this->button8->TabIndex = 133;
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
				this->button9->TabIndex = 134;
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
				this->label8->TabIndex = 143;
				this->label8->Text = L"Vocabulary";
				// 
				// pictureBox2
				// 
				this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
				this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox2->Location = System::Drawing::Point(468, 244);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(1000, 632);
				this->pictureBox2->TabIndex = 150;
				this->pictureBox2->TabStop = false;
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox1->Location = System::Drawing::Point(1442, 12);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(450, 450);
				this->pictureBox1->TabIndex = 146;
				this->pictureBox1->TabStop = false;
				// 
				// decorleft
				// 
				this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
				this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->decorleft->Location = System::Drawing::Point(12, 12);
				this->decorleft->Name = L"decorleft";
				this->decorleft->Size = System::Drawing::Size(450, 450);
				this->decorleft->TabIndex = 145;
				this->decorleft->TabStop = false;
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
				this->lesson3->Size = System::Drawing::Size(985, 148);
				this->lesson3->TabIndex = 142;
				this->lesson3->Text = L"Lesson 3 : Where";
				// 
				// pic1
				// 
				this->pic1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic1.BackgroundImage")));
				this->pic1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic1->Location = System::Drawing::Point(914, 287);
				this->pic1->Name = L"pic1";
				this->pic1->Size = System::Drawing::Size(372, 277);
				this->pic1->TabIndex = 152;
				this->pic1->TabStop = false;
				// 
				// pic2
				// 
				this->pic2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic2.BackgroundImage")));
				this->pic2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic2->Location = System::Drawing::Point(996, 587);
				this->pic2->Name = L"pic2";
				this->pic2->Size = System::Drawing::Size(349, 265);
				this->pic2->TabIndex = 153;
				this->pic2->TabStop = false;
				// 
				// pic3
				// 
				this->pic3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic3.BackgroundImage")));
				this->pic3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic3->Location = System::Drawing::Point(914, 287);
				this->pic3->Name = L"pic3";
				this->pic3->Size = System::Drawing::Size(372, 277);
				this->pic3->TabIndex = 154;
				this->pic3->TabStop = false;
				// 
				// pic4
				// 
				this->pic4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic4.BackgroundImage")));
				this->pic4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic4->Location = System::Drawing::Point(1029, 587);
				this->pic4->Name = L"pic4";
				this->pic4->Size = System::Drawing::Size(380, 265);
				this->pic4->TabIndex = 155;
				this->pic4->TabStop = false;
				// 
				// pic6
				// 
				this->pic6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic6.BackgroundImage")));
				this->pic6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic6->Location = System::Drawing::Point(1273, 602);
				this->pic6->Name = L"pic6";
				this->pic6->Size = System::Drawing::Size(184, 250);
				this->pic6->TabIndex = 156;
				this->pic6->TabStop = false;
				// 
				// pic5
				// 
				this->pic5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic5.BackgroundImage")));
				this->pic5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic5->Location = System::Drawing::Point(847, 287);
				this->pic5->Name = L"pic5";
				this->pic5->Size = System::Drawing::Size(355, 277);
				this->pic5->TabIndex = 157;
				this->pic5->TabStop = false;
				// 
				// pic7
				// 
				this->pic7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic7.BackgroundImage")));
				this->pic7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic7->Location = System::Drawing::Point(926, 287);
				this->pic7->Name = L"pic7";
				this->pic7->Size = System::Drawing::Size(263, 277);
				this->pic7->TabIndex = 158;
				this->pic7->TabStop = false;
				// 
				// pic8
				// 
				this->pic8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic8.BackgroundImage")));
				this->pic8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic8->Location = System::Drawing::Point(1014, 587);
				this->pic8->Name = L"pic8";
				this->pic8->Size = System::Drawing::Size(263, 265);
				this->pic8->TabIndex = 159;
				this->pic8->TabStop = false;
				// 
				// pic9
				// 
				this->pic9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic9.BackgroundImage")));
				this->pic9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic9->Location = System::Drawing::Point(939, 287);
				this->pic9->Name = L"pic9";
				this->pic9->Size = System::Drawing::Size(347, 277);
				this->pic9->TabIndex = 160;
				this->pic9->TabStop = false;
				// 
				// pic10
				// 
				this->pic10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic10.BackgroundImage")));
				this->pic10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic10->Location = System::Drawing::Point(1060, 587);
				this->pic10->Name = L"pic10";
				this->pic10->Size = System::Drawing::Size(311, 265);
				this->pic10->TabIndex = 161;
				this->pic10->TabStop = false;
				// 
				// pic12
				// 
				this->pic12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic12.BackgroundImage")));
				this->pic12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic12->Location = System::Drawing::Point(1003, 587);
				this->pic12->Name = L"pic12";
				this->pic12->Size = System::Drawing::Size(368, 265);
				this->pic12->TabIndex = 162;
				this->pic12->TabStop = false;
				// 
				// pic11
				// 
				this->pic11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic11.BackgroundImage")));
				this->pic11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic11->Location = System::Drawing::Point(926, 287);
				this->pic11->Name = L"pic11";
				this->pic11->Size = System::Drawing::Size(347, 277);
				this->pic11->TabIndex = 163;
				this->pic11->TabStop = false;
				// 
				// pic13
				// 
				this->pic13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic13.BackgroundImage")));
				this->pic13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic13->Location = System::Drawing::Point(930, 287);
				this->pic13->Name = L"pic13";
				this->pic13->Size = System::Drawing::Size(362, 277);
				this->pic13->TabIndex = 164;
				this->pic13->TabStop = false;
				// 
				// pic14
				// 
				this->pic14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic14.BackgroundImage")));
				this->pic14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic14->Location = System::Drawing::Point(1020, 587);
				this->pic14->Name = L"pic14";
				this->pic14->Size = System::Drawing::Size(327, 265);
				this->pic14->TabIndex = 165;
				this->pic14->TabStop = false;
				// 
				// pic16
				// 
				this->pic16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic16.BackgroundImage")));
				this->pic16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic16->Location = System::Drawing::Point(1020, 587);
				this->pic16->Name = L"pic16";
				this->pic16->Size = System::Drawing::Size(351, 265);
				this->pic16->TabIndex = 166;
				this->pic16->TabStop = false;
				// 
				// pic15
				// 
				this->pic15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic15.BackgroundImage")));
				this->pic15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic15->Location = System::Drawing::Point(939, 287);
				this->pic15->Name = L"pic15";
				this->pic15->Size = System::Drawing::Size(362, 277);
				this->pic15->TabIndex = 167;
				this->pic15->TabStop = false;
				// 
				// pic17
				// 
				this->pic17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic17.BackgroundImage")));
				this->pic17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic17->Location = System::Drawing::Point(930, 287);
				this->pic17->Name = L"pic17";
				this->pic17->Size = System::Drawing::Size(362, 277);
				this->pic17->TabIndex = 168;
				this->pic17->TabStop = false;
				// 
				// pic18
				// 
				this->pic18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic18.BackgroundImage")));
				this->pic18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic18->Location = System::Drawing::Point(1102, 585);
				this->pic18->Name = L"pic18";
				this->pic18->Size = System::Drawing::Size(199, 284);
				this->pic18->TabIndex = 169;
				this->pic18->TabStop = false;
				// 
				// pic19
				// 
				this->pic19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic19.BackgroundImage")));
				this->pic19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic19->Location = System::Drawing::Point(939, 287);
				this->pic19->Name = L"pic19";
				this->pic19->Size = System::Drawing::Size(347, 277);
				this->pic19->TabIndex = 170;
				this->pic19->TabStop = false;
				// 
				// pic20
				// 
				this->pic20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic20.BackgroundImage")));
				this->pic20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic20->Location = System::Drawing::Point(1081, 587);
				this->pic20->Name = L"pic20";
				this->pic20->Size = System::Drawing::Size(275, 275);
				this->pic20->TabIndex = 171;
				this->pic20->TabStop = false;
				// 
				// pic21
				// 
				this->pic21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic21.BackgroundImage")));
				this->pic21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic21->Location = System::Drawing::Point(914, 287);
				this->pic21->Name = L"pic21";
				this->pic21->Size = System::Drawing::Size(341, 277);
				this->pic21->TabIndex = 172;
				this->pic21->TabStop = false;
				// 
				// pic22
				// 
				this->pic22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic22.BackgroundImage")));
				this->pic22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic22->Location = System::Drawing::Point(1043, 587);
				this->pic22->Name = L"pic22";
				this->pic22->Size = System::Drawing::Size(273, 275);
				this->pic22->TabIndex = 173;
				this->pic22->TabStop = false;
				// 
				// pic23
				// 
				this->pic23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic23.BackgroundImage")));
				this->pic23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic23->Location = System::Drawing::Point(926, 287);
				this->pic23->Name = L"pic23";
				this->pic23->Size = System::Drawing::Size(341, 277);
				this->pic23->TabIndex = 174;
				this->pic23->TabStop = false;
				// 
				// pic24
				// 
				this->pic24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic24.BackgroundImage")));
				this->pic24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic24->Location = System::Drawing::Point(1081, 585);
				this->pic24->Name = L"pic24";
				this->pic24->Size = System::Drawing::Size(257, 267);
				this->pic24->TabIndex = 175;
				this->pic24->TabStop = false;
				// 
				// pic25
				// 
				this->pic25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic25.BackgroundImage")));
				this->pic25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic25->Location = System::Drawing::Point(930, 287);
				this->pic25->Name = L"pic25";
				this->pic25->Size = System::Drawing::Size(341, 277);
				this->pic25->TabIndex = 176;
				this->pic25->TabStop = false;
				// 
				// pic26
				// 
				this->pic26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic26.BackgroundImage")));
				this->pic26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic26->Location = System::Drawing::Point(996, 587);
				this->pic26->Name = L"pic26";
				this->pic26->Size = System::Drawing::Size(341, 267);
				this->pic26->TabIndex = 178;
				this->pic26->TabStop = false;
				// 
				// pic27
				// 
				this->pic27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic27.BackgroundImage")));
				this->pic27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic27->Location = System::Drawing::Point(902, 287);
				this->pic27->Name = L"pic27";
				this->pic27->Size = System::Drawing::Size(318, 277);
				this->pic27->TabIndex = 179;
				this->pic27->TabStop = false;
				// 
				// pic28
				// 
				this->pic28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic28.BackgroundImage")));
				this->pic28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic28->Location = System::Drawing::Point(1043, 587);
				this->pic28->Name = L"pic28";
				this->pic28->Size = System::Drawing::Size(375, 267);
				this->pic28->TabIndex = 180;
				this->pic28->TabStop = false;
				// 
				// vocab3new
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
				this->Controls->Add(this->pic15);
				this->Controls->Add(this->pic16);
				this->Controls->Add(this->pic14);
				this->Controls->Add(this->pic13);
				this->Controls->Add(this->pic11);
				this->Controls->Add(this->pic12);
				this->Controls->Add(this->pic10);
				this->Controls->Add(this->pic9);
				this->Controls->Add(this->pic8);
				this->Controls->Add(this->pic7);
				this->Controls->Add(this->pic5);
				this->Controls->Add(this->pic6);
				this->Controls->Add(this->pic4);
				this->Controls->Add(this->pic3);
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
				this->MaximumSize = System::Drawing::Size(1920, 1080);
				this->MinimumSize = System::Drawing::Size(1918, 1030);
				this->Name = L"vocab3new";
				this->Text = L"vocab3new";
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic6))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic5))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic7))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic8))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic9))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic10))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic12))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic11))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic13))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic14))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic16))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic15))->EndInit();
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
		private: System::Void changepage(int numpage2) {
			switch (numpage2) {
			case 1:
				label2->Text = L"今天";
				label3->Text = L"jīn tiān";
				label4->Text = L"วันนี้";
				label5->Text = L"我今天去清迈。";
				label6->Text = L"Wǒ jīn tiān qù qīngmài";
				label7->Text = L"วันนี้ฉันไปเชี่ยงใหม่";
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
				label2->Text = L"昨天";
				label3->Text = L"zuó tiān";
				label4->Text = L"เมื่อวาน";
				label5->Text = L"他昨天没去学校。";
				label6->Text = L"Tā zuó tiān méi qù xué xiào";
				label7->Text = L"เมื่อวานเขาไม่ไปโรงเรียน";
				pic3->Show();
				pic4->Show();
				break;
			case 3:
				label2->Text = L"明天";
				label3->Text = L"míng tiān";
				label4->Text = L"พรุ่งนี้";
				label5->Text = L"今天星期天，明天是星期一。";
				label6->Text = L"Jīn tiān xīng qī tiān , míng tiān shì xīng qī yī";
				label7->Text = L"วันนี้วันอาทิตย์ พรุ่งนี้วันจันทร์";
				pic5->Show();
				pic6->Show();
				break;
			case 4:
				label2->Text = L"那儿";
				label3->Text = L"nàr";
				label4->Text = L"ที่นั้น";
				label5->Text = L"我们的车在那儿。";
				label6->Text = L"Wǒ mén de chē zài nàr";
				label7->Text = L"รถของพวกเราอยู่ที่นั้น";
				pic7->Show();
				pic8->Show();
				break;
			case 5:
				label2->Text = L"哪儿";
				label3->Text = L"nǎr";
				label4->Text = L"ที่ไหน";
				label5->Text = L"你家在哪儿？";
				label6->Text = L"Nǐ jiā zài nǎr?";
				label7->Text = L"บ้านของคุณอยู่ที่ไหน";
				pic9->Show();
				pic10->Show();
				break;
			case 6:
				label2->Text = L"哪";
				label3->Text = L"nǎ";
				label4->Text = L"ไหน";
				label5->Text = L"哪个杯子是你的？";
				label6->Text = L"Nǎ gè bēi zǐ shì nǐ de?";
				label7->Text = L"แก้วไหนเป็นของคุณ";
				pic11->Show();
				pic12->Show();
				break;
			case 7:
				label2->Text = L"那";
				label3->Text = L"nà";
				label4->Text = L"นั้น";
				label5->Text = L"我不认识那个人。";
				label6->Text = L"Wǒ bù rèn shí nà gè rén";
				label7->Text = L"ฉันไม่รู้จักคนนั้น	";
				pic13->Show();
				pic14->Show();
				break;
			case 8:
				label2->Text = L"几";
				label3->Text = L"jī";
				label4->Text = L"กี่";
				label5->Text = L"你有几个孩子?";
				label6->Text = L"Nǐ yǒu jī gè hái zǐ?";
				label7->Text = L"คุณมีลูกกี่คน";
				pic15->Show();
				pic16->Show();
				break;
			case 9:
				label2->Text = L"星期";
				label3->Text = L"xīng qī";
				label4->Text = L"สัปดาห์";
				label5->Text = L"一个星期有七天。";
				label6->Text = L"Yī gè xīng qī yǒu qī tiān	";
				label7->Text = L"1 สัปดาห์มี 7 วัน";
				pic17->Show();
				pic18->Show();
				break;
			case 10:
				label2->Text = L"点";
				label3->Text = L"diǎn";
				label4->Text = L"โมง";
				label5->Text = L"现在是下午三点。";
				label6->Text = L"Xiàn zài shì xià wǔ sān diǎn";
				label7->Text = L"ตอนนี้เวลาบ่ายสามโมง";
				pic19->Show();
				pic20->Show();
				break;
			case 11:
				label2->Text = L"分";
				label3->Text = L"fēn";
				label4->Text = L"นาที";
				label5->Text = L"现在八点三十分。";
				label6->Text = L"Xiàn zài bā diǎn sān shí fēn";
				label7->Text = L"ตอนนี้ 8โมง 30 นาที";
				pic21->Show();
				pic22->Show();
				break;
			case 12:
				label2->Text = L"吗";
				label3->Text = L"ma";
				label4->Text = L"ไหม ใช้ลงท้ายประโยคที่ต้องการถาม";
				label5->Text = L"你是中国人吗？";
				label6->Text = L"Nǐ shì zhōng guó rén má?";
				label7->Text = L"คุณเป็นคนจีนไหม";
				pic23->Show();
				pic24->Show();
				break;
			case 13:
				label2->Text = L"家";
				label3->Text = L"jiā";
				label4->Text = L"บ้าน";
				label5->Text = L"我家在北京。";
				label6->Text = L"Wǒ jiā zài běijīng";
				label7->Text = L"บ้านฉันอยู่ที่ปักกิ่ง";
				pic25->Show();
				pic26->Show();
				break;
			case 14:
				label2->Text = L"学校";
				label3->Text = L"xuéxiào";
				label4->Text = L"โรงเรียน";
				label5->Text = L"我们学校很大。";
				label6->Text = L"Wǒ mén xuéxiào hěn dà";
				label7->Text = L"โรงเรียนของพวกเราใหญ่มาก";
				pic27->Show();
				pic28->Show();
				break;
			}
		}


		public:bool switchToformHQ2 = false;
		public:bool switchToformcon3 = false;

		private: System::Void previousbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (numpage2 > 1) {
				numpage2--;
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
				changepage(numpage2);
			}
			else {
				this->Close();
				switchToformHQ2 = true;
			}
		}
		private: System::Void nextbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (numpage2 < 14) {
				numpage2++;

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
				changepage(numpage2);
			}
			else {
				this->Close();
				switchToformcon3 = true;
			}
		}

		};
	}