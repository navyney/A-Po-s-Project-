#pragma once
#include <windows.h>
namespace nextpage {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary forVocab1
		/// </summary>
		public ref class Vocab1 : public System::Windows::Forms::Form
		{
			int numpage = 1;
		public:
			Vocab1(void)
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
			~Vocab1()
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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Vocab1::typeid));
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
				this->button13->Click += gcnew System::EventHandler(this, &Vocab1::button13_Click);
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
				this->next->Click += gcnew System::EventHandler(this, &Vocab1::next_Click);
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
				this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->Location = System::Drawing::Point(647, 249);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(150, 128);
				this->label2->TabIndex = 49;
				this->label2->Text = L"?";
				this->label2->Click += gcnew System::EventHandler(this, &Vocab1::label2_Click);
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
				this->label3->Location = System::Drawing::Point(670, 368);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(53, 46);
				this->label3->TabIndex = 50;
				this->label3->Text = L"n?";
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
				this->label4->Location = System::Drawing::Point(670, 414);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(67, 46);
				this->label4->TabIndex = 51;
				this->label4->Text = L"�س";
				// 
				// button6
				// 
				this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
				this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button6->Location = System::Drawing::Point(678, 463);
				this->button6->Name = L"button6";
				this->button6->Size = System::Drawing::Size(60, 63);
				this->button6->TabIndex = 52;
				this->button6->UseVisualStyleBackColor = true;
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->Location = System::Drawing::Point(630, 598);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(338, 50);
				this->label5->TabIndex = 53;
				this->label5->Text = L"????????";
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->Location = System::Drawing::Point(629, 650);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(361, 50);
				this->label6->TabIndex = 54;
				this->label6->Text = L"N?r?nshizh?ger?nma";
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label7->Location = System::Drawing::Point(631, 700);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(207, 39);
				this->label7->TabIndex = 55;
				this->label7->Text = L"�س���ѡ�����������";
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
				this->pic2->Click += gcnew System::EventHandler(this, &Vocab1::pictureBox2_Click);
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
				// pic15
				// 
				this->pic15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic15.BackgroundImage")));
				this->pic15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic15->Location = System::Drawing::Point(892, 249);
				this->pic15->Name = L"pic15";
				this->pic15->Size = System::Drawing::Size(303, 277);
				this->pic15->TabIndex = 70;
				this->pic15->TabStop = false;
				// 
				// pic16
				// 
				this->pic16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic16.BackgroundImage")));
				this->pic16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic16->Location = System::Drawing::Point(1022, 552);
				this->pic16->Name = L"pic16";
				this->pic16->Size = System::Drawing::Size(404, 256);
				this->pic16->TabIndex = 71;
				this->pic16->TabStop = false;
				// 
				// pic17
				// 
				this->pic17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic17.BackgroundImage")));
				this->pic17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic17->Location = System::Drawing::Point(892, 249);
				this->pic17->Name = L"pic17";
				this->pic17->Size = System::Drawing::Size(303, 277);
				this->pic17->TabIndex = 72;
				this->pic17->TabStop = false;
				this->pic17->Click += gcnew System::EventHandler(this, &Vocab1::pic17_Click);
				// 
				// pic18
				// 
				this->pic18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic18.BackgroundImage")));
				this->pic18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic18->Location = System::Drawing::Point(1022, 552);
				this->pic18->Name = L"pic18";
				this->pic18->Size = System::Drawing::Size(321, 256);
				this->pic18->TabIndex = 73;
				this->pic18->TabStop = false;
				// 
				// pic19
				// 
				this->pic19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic19.BackgroundImage")));
				this->pic19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic19->Location = System::Drawing::Point(1034, 249);
				this->pic19->Name = L"pic19";
				this->pic19->Size = System::Drawing::Size(215, 277);
				this->pic19->TabIndex = 74;
				this->pic19->TabStop = false;
				// 
				// pic20
				// 
				this->pic20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic20.BackgroundImage")));
				this->pic20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic20->Location = System::Drawing::Point(1152, 552);
				this->pic20->Name = L"pic20";
				this->pic20->Size = System::Drawing::Size(321, 256);
				this->pic20->TabIndex = 75;
				this->pic20->TabStop = false;
				// 
				// pic21
				// 
				this->pic21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic21.BackgroundImage")));
				this->pic21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic21->Location = System::Drawing::Point(1069, 249);
				this->pic21->Name = L"pic21";
				this->pic21->Size = System::Drawing::Size(239, 277);
				this->pic21->TabIndex = 76;
				this->pic21->TabStop = false;
				// 
				// pic22
				// 
				this->pic22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic22.BackgroundImage")));
				this->pic22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic22->Location = System::Drawing::Point(1225, 552);
				this->pic22->Name = L"pic22";
				this->pic22->Size = System::Drawing::Size(296, 256);
				this->pic22->TabIndex = 77;
				this->pic22->TabStop = false;
				// 
				// pic23
				// 
				this->pic23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic23.BackgroundImage")));
				this->pic23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic23->Location = System::Drawing::Point(1069, 273);
				this->pic23->Name = L"pic23";
				this->pic23->Size = System::Drawing::Size(254, 253);
				this->pic23->TabIndex = 78;
				this->pic23->TabStop = false;
				// 
				// pic24
				// 
				this->pic24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic24.BackgroundImage")));
				this->pic24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pic24->Location = System::Drawing::Point(1069, 552);
				this->pic24->Name = L"pic24";
				this->pic24->Size = System::Drawing::Size(254, 253);
				this->pic24->TabIndex = 79;
				this->pic24->TabStop = false;
				// 
				// Vocab1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1904, 1041);
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
				this->Controls->Add(this->button13);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->button9);
				this->Controls->Add(this->next);
				this->Controls->Add(this->progressBar1);
				this->MaximumSize = System::Drawing::Size(1920, 1080);
				this->MinimumSize = System::Drawing::Size(1918, 1030);
				this->Name = L"Vocab1";
				this->Text = L"Vocab1";
				this->Load += gcnew System::EventHandler(this, &Vocab1::MyForm_Load);
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
				this->ResumeLayout(false);
				this->PerformLayout();

			}

#pragma endregion
		private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void changepage(int numpage) {
			switch (numpage) {
			case 1:
				label2->Text = L"?";
				label3->Text = L"n?";
				label4->Text = L"�س";
				label5->Text = L"????????";
				label6->Text = L"N?r?nshizh?ger?nma";
				label7->Text = L"�س���ѡ�����������";
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
				label2->Text = L"?";
				label3->Text = L"w?";
				label4->Text = L"�ѹ";
				label5->Text = L"?????";
				label6->Text = L"w? b?zh?d?o";
				label7->Text = L"�ѹ������";
				pic17->Show();
				pic18->Show();
				break;
			case 3:
				label2->Text = L"?";
				label3->Text = L"ji?o";
				label4->Text = L"���¡���(��Ѻ����)";
				label5->Text = L"?????????? ";
				label6->Text = L"w?dem?ngz?ji?oJi?s?t?ngb?b?";
				label7->Text = L"���ͧ͢�ѹ��� Justin Bieber";
				pic19->Show();
				pic20->Show();;
				break;
			case 4:
				label2->Text = L"??";
				label3->Text = L"z?iji?n";
				label4->Text = L"�ҡ�͹";
				label5->Text = L"????????????";
				label6->Text = L"m?m? ,w?q?xu?xi?ole , z?iji?n";
				label7->Text = L"��� �ѹ仨���ç���¹���� �ҡ�͹";
				//pic1->Hide();
				//pic2->Hide();
				pic21->Show();
				pic22->Show();
				//pic5->Hide();
				//pic6->Hide();
				break;

			case 5:
				label2->Text = L"?";
				label3->Text = L"h?o";
				label4->Text = L"��";
				label5->Text = L"???????";
				label6->Text = L"J?nti?nti?nq?h?nh?o";
				label7->Text = L"�ѹ����ҡ�ȴ��ҡ";
				//pic1->Hide();
				//pic2->Hide();
				pic23->Show();
				pic24->Show();
				//pic5->Hide();
				//pic6->Hide();
				break;
			case 6:
				label2->Text = L"?";
				label3->Text = L"sh?";
				label4->Text = L"��� ��	";
				label5->Text = L"?????	";
				label6->Text = L"t? sh? l?o sh?";
				label7->Text = L"�Ҥ�ͤس���";
				pic1->Show();
				pic2->Show();
				break;
			case 7:
				label2->Text = L"?";
				label3->Text = L"d?";
				label4->Text = L"�˭�";
				label5->Text = L"???????";
				label6->Text = L"Zh?gep?nggu?h?nd?";
				label7->Text = L"�ͻ�����١����˭��ҡ";
				//pic1->Hide();
				//pic2->Hide();
				pic3->Show();
				pic4->Show();
				//pic5->Hide();
				//pic6->Hide();
				break;
			case 8:
				label2->Text = L"??";
				label3->Text = L"sh?nme";
				label4->Text = L"����";
				label5->Text = L"?????";
				label6->Text = L"N?zu?sh?nme";
				label7->Text = L"�س������";
				//pic3->Hide();
				//pic4->Hide();
				pic5->Show();
				pic6->Show();
				//pic7->Hide();
				//pic8->Hide();
				break;
			case 9:
				label2->Text = L"?";
				label3->Text = L"b?";
				label4->Text = L"���";
				label5->Text = L"??????";
				label6->Text = L"W?b?sh?d?ifu";
				label7->Text = L"�ѹ��������";
				//pic5->Hide();
				//pic6->Hide();
				pic7->Show();
				pic8->Show();
				//pic9->Hide();
				//pic10->Hide();
				break;
			case 10:
				label2->Text = L"?";
				label3->Text = L"zu?";
				label4->Text = L"��";
				label5->Text = L"???????";
				label6->Text = L"W?m?iti?nzu?zu?y?";
				label7->Text = L"�ѹ�ӡ�ú�ҹ�ء�ѹ";
				//pic7->Hide();
				//pic8->Hide();
				pic9->Show();
				pic10->Show();
				//pic11->Hide();
				//pic12->Hide();
				break;
			case 11:
				label2->Text = L"??";
				label3->Text = L"n?h?o";
				label4->Text = L"���ʴ�";
				label5->Text = L"A: ??     B:??";
				label6->Text = L"A: n?h?o   B:n?h?o";
				label7->Text = L"A:���ʴ�      B:���ʴ�";
				//pic9->Hide();
				//pic10->Hide();
				pic11->Show();
				pic12->Show();
				//pic13->Hide();
				//pic14->Hide();
				break;
			case 12:
				label2->Text = L"??";
				label3->Text = L"xi? xi?";
				label4->Text = L"�ͺ�س";
				label5->Text = L"A: ???!     B:???";
				label6->Text = L"A: xi?xi?n?     B: b?k?q?";
				label7->Text = L"A:�ͺ�س        B:�������";
				//pic11->Hide();
				//pic12->Hide();
				pic13->Show();
				pic14->Show();
				break;
			}


		}
		public: bool switchToformBQuiz = false;
		private: System::Void next_Click(System::Object^ sender, System::EventArgs^ e) {
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
				numpage = 1;
				changepage(numpage);
				this->Close();
				switchToformBQuiz = true;
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
				switchToformBQuiz = true;
			}
		}
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void pic17_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		};
	}

