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
		/// Summary for MyForm
		/// </summary>
		public ref class vo1: public System::Windows::Forms::Form
		{
			int numpage = 1;
		public:
			vo1(void)
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
			~vo1()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Button^ button8;
		protected:


		private: System::Windows::Forms::Button^ button9;



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
		private: System::Windows::Forms::PictureBox^ nextbutton;
		private: System::Windows::Forms::PictureBox^ previousbutton;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ decorleft;
		private: System::Windows::Forms::ProgressBar^ progressBar2;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ lesson3;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::PictureBox^ pictureBox3;















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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(vo1::typeid));
				this->button8 = (gcnew System::Windows::Forms::Button());
				this->button9 = (gcnew System::Windows::Forms::Button());
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
				this->nextbutton = (gcnew System::Windows::Forms::PictureBox());
				this->previousbutton = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->decorleft = (gcnew System::Windows::Forms::PictureBox());
				this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->lesson3 = (gcnew System::Windows::Forms::Label());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
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
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				this->SuspendLayout();
				// 
				// button8
				// 
				this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
				this->button8->AutoSize = true;
				this->button8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
				this->button8->Location = System::Drawing::Point(644, 1425);
				this->button8->MaximumSize = System::Drawing::Size(400, 200);
				this->button8->MinimumSize = System::Drawing::Size(136, 60);
				this->button8->Name = L"button8";
				this->button8->Size = System::Drawing::Size(240, 107);
				this->button8->TabIndex = 42;
				this->button8->Text = L"Previous";
				this->button8->UseVisualStyleBackColor = true;
				// 
				// button9
				// 
				this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
				this->button9->AutoSize = true;
				this->button9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
				this->button9->Location = System::Drawing::Point(2469, 1425);
				this->button9->MaximumSize = System::Drawing::Size(400, 200);
				this->button9->MinimumSize = System::Drawing::Size(136, 60);
				this->button9->Name = L"button9";
				this->button9->Size = System::Drawing::Size(240, 107);
				this->button9->TabIndex = 43;
				this->button9->Text = L"Next";
				this->button9->UseVisualStyleBackColor = true;
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label2->Location = System::Drawing::Point(541, 288);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(150, 128);
				this->label2->TabIndex = 49;
				this->label2->Text = L"你";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
				this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label3->Location = System::Drawing::Point(564, 407);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(53, 46);
				this->label3->TabIndex = 50;
				this->label3->Text = L"nǐ";
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
				this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label4->Location = System::Drawing::Point(564, 453);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(67, 46);
				this->label4->TabIndex = 51;
				this->label4->Text = L"คุณ";
				// 
				// button6
				// 
				this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
				this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button6->Location = System::Drawing::Point(577, 502);
				this->button6->Name = L"button6";
				this->button6->Size = System::Drawing::Size(40, 40);
				this->button6->TabIndex = 52;
				this->button6->UseVisualStyleBackColor = true;
				this->button6->Click += gcnew System::EventHandler(this, &vo1::button6_Click);
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label5->Location = System::Drawing::Point(524, 637);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(332, 47);
				this->label5->TabIndex = 53;
				this->label5->Text = L"你认识这个人吗？";
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label6->Location = System::Drawing::Point(523, 689);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(371, 47);
				this->label6->TabIndex = 54;
				this->label6->Text = L"Nǐ rènshi zhè ge rén ma";
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label7->Location = System::Drawing::Point(525, 739);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(259, 47);
				this->label7->TabIndex = 55;
				this->label7->Text = L"คุณรู้จักคนคนนี้มั้ย";
				// 
				// pic1
				// 
				this->pic1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic1.BackgroundImage")));
				this->pic1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic1->Location = System::Drawing::Point(844, 591);
				this->pic1->Name = L"pic1";
				this->pic1->Size = System::Drawing::Size(366, 244);
				this->pic1->TabIndex = 56;
				this->pic1->TabStop = false;
				// 
				// pic2
				// 
				this->pic2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic2.BackgroundImage")));
				this->pic2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic2->Location = System::Drawing::Point(786, 288);
				this->pic2->Name = L"pic2";
				this->pic2->Size = System::Drawing::Size(276, 218);
				this->pic2->TabIndex = 57;
				this->pic2->TabStop = false;
				this->pic2->Click += gcnew System::EventHandler(this, &vo1::pictureBox2_Click);
				// 
				// pic3
				// 
				this->pic3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic3.BackgroundImage")));
				this->pic3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic3->Location = System::Drawing::Point(853, 288);
				this->pic3->Name = L"pic3";
				this->pic3->Size = System::Drawing::Size(290, 277);
				this->pic3->TabIndex = 58;
				this->pic3->TabStop = false;
				// 
				// pic4
				// 
				this->pic4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic4.BackgroundImage")));
				this->pic4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic4->Location = System::Drawing::Point(954, 591);
				this->pic4->Name = L"pic4";
				this->pic4->Size = System::Drawing::Size(256, 244);
				this->pic4->TabIndex = 59;
				this->pic4->TabStop = false;
				// 
				// pic5
				// 
				this->pic5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic5.BackgroundImage")));
				this->pic5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic5->Location = System::Drawing::Point(853, 312);
				this->pic5->Name = L"pic5";
				this->pic5->Size = System::Drawing::Size(384, 253);
				this->pic5->TabIndex = 60;
				this->pic5->TabStop = false;
				// 
				// pic8
				// 
				this->pic8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic8.BackgroundImage")));
				this->pic8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic8->Location = System::Drawing::Point(911, 591);
				this->pic8->Name = L"pic8";
				this->pic8->Size = System::Drawing::Size(303, 256);
				this->pic8->TabIndex = 61;
				this->pic8->TabStop = false;
				// 
				// pic7
				// 
				this->pic7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic7.BackgroundImage")));
				this->pic7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic7->Location = System::Drawing::Point(853, 288);
				this->pic7->Name = L"pic7";
				this->pic7->Size = System::Drawing::Size(299, 277);
				this->pic7->TabIndex = 62;
				this->pic7->TabStop = false;
				// 
				// pic6
				// 
				this->pic6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic6.BackgroundImage")));
				this->pic6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic6->Location = System::Drawing::Point(911, 591);
				this->pic6->Name = L"pic6";
				this->pic6->Size = System::Drawing::Size(364, 256);
				this->pic6->TabIndex = 63;
				this->pic6->TabStop = false;
				// 
				// pic9
				// 
				this->pic9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic9.BackgroundImage")));
				this->pic9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic9->Location = System::Drawing::Point(853, 288);
				this->pic9->Name = L"pic9";
				this->pic9->Size = System::Drawing::Size(299, 277);
				this->pic9->TabIndex = 64;
				this->pic9->TabStop = false;
				// 
				// pic10
				// 
				this->pic10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic10.BackgroundImage")));
				this->pic10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic10->Location = System::Drawing::Point(974, 591);
				this->pic10->Name = L"pic10";
				this->pic10->Size = System::Drawing::Size(364, 256);
				this->pic10->TabIndex = 65;
				this->pic10->TabStop = false;
				// 
				// pic11
				// 
				this->pic11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic11.BackgroundImage")));
				this->pic11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic11->Location = System::Drawing::Point(853, 288);
				this->pic11->Name = L"pic11";
				this->pic11->Size = System::Drawing::Size(303, 277);
				this->pic11->TabIndex = 66;
				this->pic11->TabStop = false;
				// 
				// pic12
				// 
				this->pic12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic12.BackgroundImage")));
				this->pic12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic12->Location = System::Drawing::Point(974, 591);
				this->pic12->Name = L"pic12";
				this->pic12->Size = System::Drawing::Size(364, 256);
				this->pic12->TabIndex = 67;
				this->pic12->TabStop = false;
				// 
				// pic13
				// 
				this->pic13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic13.BackgroundImage")));
				this->pic13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic13->Location = System::Drawing::Point(853, 288);
				this->pic13->Name = L"pic13";
				this->pic13->Size = System::Drawing::Size(303, 277);
				this->pic13->TabIndex = 68;
				this->pic13->TabStop = false;
				// 
				// pic14
				// 
				this->pic14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic14.BackgroundImage")));
				this->pic14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic14->Location = System::Drawing::Point(1006, 591);
				this->pic14->Name = L"pic14";
				this->pic14->Size = System::Drawing::Size(404, 256);
				this->pic14->TabIndex = 69;
				this->pic14->TabStop = false;
				// 
				// pic15
				// 
				this->pic15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic15.BackgroundImage")));
				this->pic15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic15->Location = System::Drawing::Point(786, 288);
				this->pic15->Name = L"pic15";
				this->pic15->Size = System::Drawing::Size(303, 277);
				this->pic15->TabIndex = 70;
				this->pic15->TabStop = false;
				// 
				// pic16
				// 
				this->pic16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic16.BackgroundImage")));
				this->pic16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic16->Location = System::Drawing::Point(974, 591);
				this->pic16->Name = L"pic16";
				this->pic16->Size = System::Drawing::Size(404, 256);
				this->pic16->TabIndex = 71;
				this->pic16->TabStop = false;
				// 
				// pic17
				// 
				this->pic17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic17.BackgroundImage")));
				this->pic17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic17->Location = System::Drawing::Point(786, 288);
				this->pic17->Name = L"pic17";
				this->pic17->Size = System::Drawing::Size(314, 277);
				this->pic17->TabIndex = 72;
				this->pic17->TabStop = false;
				// 
				// pic18
				// 
				this->pic18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic18.BackgroundImage")));
				this->pic18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic18->Location = System::Drawing::Point(911, 591);
				this->pic18->Name = L"pic18";
				this->pic18->Size = System::Drawing::Size(321, 256);
				this->pic18->TabIndex = 73;
				this->pic18->TabStop = false;
				// 
				// pic19
				// 
				this->pic19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic19.BackgroundImage")));
				this->pic19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic19->Location = System::Drawing::Point(928, 288);
				this->pic19->Name = L"pic19";
				this->pic19->Size = System::Drawing::Size(274, 277);
				this->pic19->TabIndex = 74;
				this->pic19->TabStop = false;
				// 
				// pic20
				// 
				this->pic20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic20.BackgroundImage")));
				this->pic20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic20->Location = System::Drawing::Point(1079, 591);
				this->pic20->Name = L"pic20";
				this->pic20->Size = System::Drawing::Size(321, 256);
				this->pic20->TabIndex = 75;
				this->pic20->TabStop = false;
				// 
				// pic21
				// 
				this->pic21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic21.BackgroundImage")));
				this->pic21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic21->Location = System::Drawing::Point(963, 288);
				this->pic21->Name = L"pic21";
				this->pic21->Size = System::Drawing::Size(239, 277);
				this->pic21->TabIndex = 76;
				this->pic21->TabStop = false;
				// 
				// pic22
				// 
				this->pic22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic22.BackgroundImage")));
				this->pic22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic22->Location = System::Drawing::Point(1104, 591);
				this->pic22->Name = L"pic22";
				this->pic22->Size = System::Drawing::Size(296, 256);
				this->pic22->TabIndex = 77;
				this->pic22->TabStop = false;
				// 
				// pic23
				// 
				this->pic23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic23.BackgroundImage")));
				this->pic23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic23->Location = System::Drawing::Point(963, 288);
				this->pic23->Name = L"pic23";
				this->pic23->Size = System::Drawing::Size(290, 277);
				this->pic23->TabIndex = 78;
				this->pic23->TabStop = false;
				// 
				// pic24
				// 
				this->pic24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic24.BackgroundImage")));
				this->pic24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic24->Location = System::Drawing::Point(974, 591);
				this->pic24->Name = L"pic24";
				this->pic24->Size = System::Drawing::Size(254, 253);
				this->pic24->TabIndex = 79;
				this->pic24->TabStop = false;
				// 
				// nextbutton
				// 
				this->nextbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextbutton.BackgroundImage")));
				this->nextbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->nextbutton->Location = System::Drawing::Point(1584, 897);
				this->nextbutton->Name = L"nextbutton";
				this->nextbutton->Size = System::Drawing::Size(282, 133);
				this->nextbutton->TabIndex = 86;
				this->nextbutton->TabStop = false;
				this->nextbutton->Click += gcnew System::EventHandler(this, &vo1::nextbutton_Click);
				// 
				// previousbutton
				// 
				this->previousbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousbutton.BackgroundImage")));
				this->previousbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->previousbutton->Location = System::Drawing::Point(33, 897);
				this->previousbutton->Name = L"previousbutton";
				this->previousbutton->Size = System::Drawing::Size(300, 130);
				this->previousbutton->TabIndex = 85;
				this->previousbutton->TabStop = false;
				this->previousbutton->Click += gcnew System::EventHandler(this, &vo1::previousbutton_Click);
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox1->Location = System::Drawing::Point(1442, 13);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(450, 450);
				this->pictureBox1->TabIndex = 84;
				this->pictureBox1->TabStop = false;
				// 
				// decorleft
				// 
				this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
				this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->decorleft->Location = System::Drawing::Point(12, 13);
				this->decorleft->Name = L"decorleft";
				this->decorleft->Size = System::Drawing::Size(450, 450);
				this->decorleft->TabIndex = 83;
				this->decorleft->TabStop = false;
				// 
				// progressBar2
				// 
				this->progressBar2->Location = System::Drawing::Point(443, 946);
				this->progressBar2->Name = L"progressBar2";
				this->progressBar2->Size = System::Drawing::Size(1000, 35);
				this->progressBar2->TabIndex = 82;
				this->progressBar2->Click += gcnew System::EventHandler(this, &vo1::progressBar2_Click);
				// 
				// label8
				// 
				this->label8->AutoSize = true;
				this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label8->Location = System::Drawing::Point(765, 160);
				this->label8->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(361, 82);
				this->label8->TabIndex = 81;
				this->label8->Text = L"Vocabulary";
				// 
				// lesson3
				// 
				this->lesson3->AutoSize = true;
				this->lesson3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 87.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lesson3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->lesson3->Location = System::Drawing::Point(470, 10);
				this->lesson3->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->lesson3->Name = L"lesson3";
				this->lesson3->Size = System::Drawing::Size(968, 150);
				this->lesson3->TabIndex = 80;
				this->lesson3->Text = L"Lesson 1 : Hello!";
				// 
				// button1
				// 
				this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
				this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button1->Location = System::Drawing::Point(577, 795);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(40, 40);
				this->button1->TabIndex = 87;
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &vo1::button1_Click);
				// 
				// pictureBox2
				// 
				this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
				this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox2->Location = System::Drawing::Point(468, 245);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(1000, 632);
				this->pictureBox2->TabIndex = 88;
				this->pictureBox2->TabStop = false;
				// 
				// pictureBox3
				// 
				this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
				this->pictureBox3->Location = System::Drawing::Point(487, 577);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(960, 5);
				this->pictureBox3->TabIndex = 89;
				this->pictureBox3->TabStop = false;
				// 
				// vo1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1904, 1041);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->nextbutton);
				this->Controls->Add(this->previousbutton);
				this->Controls->Add(this->progressBar2);
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
				this->Controls->Add(this->button9);
				this->Controls->Add(this->label8);
				this->Controls->Add(this->lesson3);
				this->Controls->Add(this->pictureBox2);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->decorleft);
				this->MaximumSize = System::Drawing::Size(1920, 1080);
				this->MinimumSize = System::Drawing::Size(1918, 1030);
				this->Name = L"vo1";
				this->Text = L"vo1";
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
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
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}

#pragma endregion
		private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void changepage(int numpage) {
			switch (numpage) {
			case 1:
				this->progressBar2->Value = 7.14 * 1;
				label2->Text = L"你";
				label3->Text = L"nǐ";
				label4->Text = L"คุณ";
				label5->Text = L"你认识这个人吗？";
				label6->Text = L"Nǐ rènshi zhè ge rén ma";
				label7->Text = L"คุณรู้จักคนคนนี้มั้ย";
				pic15->Show();
				pic16->Show();
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
				pic17->Hide();
				pic18->Hide();
				pic19->Hide();
				pic20->Hide();
				pic21->Hide();
				pic22->Hide();
				pic23->Hide();
				pic24->Hide();
				break;

			case 2:
				this->progressBar2->Value = 7.14 * 2;
				label2->Text = L"我";
				label3->Text = L"wǒ";
				label4->Text = L"ฉัน";
				label5->Text = L"我不知道。";
				label6->Text = L"Wǒ bù zhīdào";
				label7->Text = L"ฉันไม่รู้";
				pic17->Show();
				pic18->Show();
				break;
			case 3:
				this->progressBar2->Value = 7.14 * 3;
				label2->Text = L"叫";
				label3->Text = L"jiào";
				label4->Text = L"เรียกว่า(ใช้กับชื่อ)";
				label5->Text = L"我的名字叫贾斯汀比伯 ";
				label6->Text = L"Wǒ de míngzì jiào Jiǎsītīngbǐbó";
				label7->Text = L"ชื่อของฉันคือ Justin Bieber";
				pic19->Show();
				pic20->Show();;
				break;
			case 4:
				this->progressBar2->Value = 7.14 * 4;
				label2->Text = L"再见";
				label3->Text = L"zàijiàn";
				label4->Text = L"ลาก่อน";
				label5->Text = L"我去学校了，再见。";
				label6->Text = L"Wǒ qù xuéxiào le , zàijiàn";
				label7->Text = L"ฉันไปจะไปโรงเรียนแล้ว ลาก่อน";
				//pic1->Hide();
				//pic2->Hide();
				pic21->Show();
				pic22->Show();
				//pic5->Hide();
				//pic6->Hide();
				break;

			case 5:
				this->progressBar2->Value = 7.14 * 5;
				label2->Text = L"好";
				label3->Text = L"hǎo";
				label4->Text = L"ดี";
				label5->Text = L"今天天气很好。";
				label6->Text = L"Jīntiān tiānqì hěn hǎo";
				label7->Text = L"วันนี้อากาศดีมาก";
				//pic1->Hide();
				//pic2->Hide();
				pic23->Show();
				pic24->Show();
				//pic5->Hide();
				//pic6->Hide();
				break;
			case 6:
				this->progressBar2->Value = 7.14 * 6;
				label2->Text = L"是";
				label3->Text = L"shì";
				label4->Text = L"คือ เป็น	";
				label5->Text = L"他是老师。	";
				label6->Text = L"Tā shì lǎoshī";
				label7->Text = L"เขาคือคุณครู";
				pic1->Show();
				pic2->Show();
				break;
			case 7:
				this->progressBar2->Value = 7.14 * 7;
				label2->Text = L"大";
				label3->Text = L"dà";
				label4->Text = L"ใหญ่";
				label5->Text = L"这个苹果很大。";
				label6->Text = L"Zhè ge píngguǒ hěn dà";
				label7->Text = L"แอปเปิ้ลลูกนี้ใหญ่มาก";
				//pic1->Hide();
				//pic2->Hide();
				pic3->Show();
				pic4->Show();
				//pic5->Hide();
				//pic6->Hide();
				break;
			case 8:
				this->progressBar2->Value = 7.14 * 8;
				label2->Text = L"什么";
				label3->Text = L"shénme";
				label4->Text = L"อะไร";
				label5->Text = L"你做什么？";
				label6->Text = L"Nǐ zuò shénme";
				label7->Text = L"คุณทำอะไร";
				//pic3->Hide();
				//pic4->Hide();
				pic5->Show();
				pic6->Show();
				//pic7->Hide();
				//pic8->Hide();
				break;
			case 9:
				this->progressBar2->Value = 7.14 * 9;
				label2->Text = L"不";
				label3->Text = L"bù";
				label4->Text = L"ไม่";
				label5->Text = L"我不是大夫。";
				label6->Text = L"Wǒ bù shì dàifu";
				label7->Text = L"ฉันไม่ใช่หมอ";
				//pic5->Hide();
				//pic6->Hide();
				pic7->Show();
				pic8->Show();
				//pic9->Hide();
				//pic10->Hide();
				break;
			case 10:
				this->progressBar2->Value = 7.14 * 10;
				label2->Text = L"做";
				label3->Text = L"zuò";
				label4->Text = L"ทำ";
				label5->Text = L"我每天做作业。";
				label6->Text = L"Wǒ měitiān zuò zuòyè";
				label7->Text = L"ฉันทำการบ้านทุกวัน";
				//pic7->Hide();
				//pic8->Hide();
				pic9->Show();
				pic10->Show();
				//pic11->Hide();
				//pic12->Hide();
				break;
			case 11:
				this->progressBar2->Value = 7.14 * 11;
				label2->Text = L"你好";
				label3->Text = L"nǐhǎo";
				label4->Text = L"สวัสดี";
				label5->Text = L"A: 你好     B:你好";
				label6->Text = L"A: Nǐhǎo   B:Nǐhǎo";
				label7->Text = L"A:สวัสดี      B:สวัสดี";
				//pic9->Hide();
				//pic10->Hide();
				pic11->Show();
				pic12->Show();
				//pic13->Hide();
				//pic14->Hide();
				break;
			case 12:
				this->progressBar2->Value = 7.14 * 12;
				label2->Text = L"谢谢";
				label3->Text = L"xiè xiè";
				label4->Text = L"ขอบคุณ";
				label5->Text = L"A: 谢谢你!     B:不客气";
				label6->Text = L"A: Xièxiè nǐ     B: Bùkèqì";
				label7->Text = L"A:ขอบคุณ        B:ไม่เป็นไร";
				//pic11->Hide();
				//pic12->Hide();
				pic13->Show();
				pic14->Show();
				break;
			}


		}
		public:bool switchToformHQ0 = false;
		public:bool switchToformnum = false;
		private: System::Void previousbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			
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
				changepage(numpage);

			}
			else {
				this->Close();
				switchToformHQ0 = true;
			}
		}
		private: System::Void nextbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			
			if (numpage < 12) {
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
				changepage(numpage);

			}
			else {
				this->Close();
				switchToformnum = true;
			}
		}
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			switch (numpage) {
			case 1:
				PlaySound(TEXT("你.wav"), NULL, SND_SYNC);
				break;
			case 2:
				PlaySound(TEXT("我.wav"), NULL, SND_SYNC);
				break;
			case 3:
				PlaySound(TEXT("叫.wav"), NULL, SND_SYNC);
				break;
			case 4:
				PlaySound(TEXT("再见.wav"), NULL, SND_SYNC);
				break;
			case 5:
				PlaySound(TEXT("好.wav"), NULL, SND_SYNC);
				break;
			case 6:
				PlaySound(TEXT("是.wav"), NULL, SND_SYNC);
				break;
			case 7:
				PlaySound(TEXT("大.wav"), NULL, SND_SYNC);
				break;
			case 8:
				PlaySound(TEXT("什么.wav"), NULL, SND_SYNC);
				break;
			case 9:
				PlaySound(TEXT("不.wav"), NULL, SND_SYNC);
				break;
			case 10:
				PlaySound(TEXT("做.wav"), NULL, SND_SYNC);
				break;
			case 11:
				PlaySound(TEXT("你好.wav"), NULL, SND_SYNC);
				break;
			case 12:
				PlaySound(TEXT("谢谢.wav"), NULL, SND_SYNC);
				break;
			}
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			switch (numpage) {
			case 1:
				PlaySound(TEXT("你认识这个人吗.wav"), NULL, SND_SYNC);
				break;
			case 2:
				PlaySound(TEXT("我不知道.wav"), NULL, SND_SYNC);
				break;
			case 3:
				PlaySound(TEXT("我的名字叫贾斯汀比伯.wav"), NULL, SND_SYNC);
				break;
			case 4:
				PlaySound(TEXT("我去学校了，再见.wav"), NULL, SND_SYNC);
				break;
			case 5:
				PlaySound(TEXT("今天天气很好.wav"), NULL, SND_SYNC);
				break;
			case 6:
				PlaySound(TEXT("他是老师.wav"), NULL, SND_SYNC);
				break;
			case 7:
				PlaySound(TEXT("这个苹果很大.wav"), NULL, SND_SYNC);
				break;
			case 8:
				PlaySound(TEXT("你做什么.wav"), NULL, SND_SYNC);
				break;
			case 9:
				PlaySound(TEXT("我不是大夫.wav"), NULL, SND_SYNC);
				break;
			case 10:
				PlaySound(TEXT("我每天做作业.wav"), NULL, SND_SYNC);
				break;
			case 11:
				PlaySound(TEXT("你好.wav"), NULL, SND_SYNC);
				PlaySound(TEXT("你好girl.wav"), NULL, SND_SYNC);
				break;
			case 12:
				PlaySound(TEXT("谢谢你.wav"), NULL, SND_SYNC);
				PlaySound(TEXT("不客气girl.wav"), NULL, SND_SYNC);
				break;
			}
		}
			   private: System::Void progressBar2_Click(System::Object^ sender, System::EventArgs^ e) {
				   }
			
};
	}
