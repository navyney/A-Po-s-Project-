#pragma once
#include <iostream>
#include <Windows.h>
#include "mmSystem.h"

namespace allmodel {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for msound
		/// </summary>
		public ref class msound : public System::Windows::Forms::Form
		{
		public:
			msound(void)
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
			~msound()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^ label12;
		protected:
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Button^ button10;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Button^ wanr;
		private: System::Windows::Forms::Button^ nar;
		private: System::Windows::Forms::Button^ zher;
		private: System::Windows::Forms::Button^ huar;
		private: System::Windows::Forms::Button^ er4;
		private: System::Windows::Forms::Button^ er3;
		private: System::Windows::Forms::Button^ er2;
		private: System::Windows::Forms::Button^ er;
		private: System::Windows::Forms::Button^ wan;
		private: System::Windows::Forms::Button^ shang;
		private: System::Windows::Forms::Button^ na;
		private: System::Windows::Forms::Button^ xian;
		private: System::Windows::Forms::Button^ zhe;
		private: System::Windows::Forms::Button^ ma;
		private: System::Windows::Forms::Button^ hua;
		private: System::Windows::Forms::Button^ ang;
		private: System::Windows::Forms::Button^ sh;
		private: System::Windows::Forms::Button^ ian;
		private: System::Windows::Forms::Button^ x;
		private: System::Windows::Forms::Button^ a;
		private: System::Windows::Forms::Button^ m;
		private: System::Windows::Forms::TextBox^ textBox4;
		private: System::Windows::Forms::TextBox^ textBox3;
		private: System::Windows::Forms::ProgressBar^ progressBar1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ lesson3;
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::PictureBox^ nextbutton;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ pictureBox3;
		private: System::Windows::Forms::PictureBox^ decorleft;
		private: System::Windows::Forms::PictureBox^ previousbutton;

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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(msound::typeid));
				this->label12 = (gcnew System::Windows::Forms::Label());
				this->label11 = (gcnew System::Windows::Forms::Label());
				this->label10 = (gcnew System::Windows::Forms::Label());
				this->label9 = (gcnew System::Windows::Forms::Label());
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->label7 = (gcnew System::Windows::Forms::Label());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->button10 = (gcnew System::Windows::Forms::Button());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->wanr = (gcnew System::Windows::Forms::Button());
				this->nar = (gcnew System::Windows::Forms::Button());
				this->zher = (gcnew System::Windows::Forms::Button());
				this->huar = (gcnew System::Windows::Forms::Button());
				this->er4 = (gcnew System::Windows::Forms::Button());
				this->er3 = (gcnew System::Windows::Forms::Button());
				this->er2 = (gcnew System::Windows::Forms::Button());
				this->er = (gcnew System::Windows::Forms::Button());
				this->wan = (gcnew System::Windows::Forms::Button());
				this->shang = (gcnew System::Windows::Forms::Button());
				this->na = (gcnew System::Windows::Forms::Button());
				this->xian = (gcnew System::Windows::Forms::Button());
				this->zhe = (gcnew System::Windows::Forms::Button());
				this->ma = (gcnew System::Windows::Forms::Button());
				this->hua = (gcnew System::Windows::Forms::Button());
				this->ang = (gcnew System::Windows::Forms::Button());
				this->sh = (gcnew System::Windows::Forms::Button());
				this->ian = (gcnew System::Windows::Forms::Button());
				this->x = (gcnew System::Windows::Forms::Button());
				this->a = (gcnew System::Windows::Forms::Button());
				this->m = (gcnew System::Windows::Forms::Button());
				this->textBox4 = (gcnew System::Windows::Forms::TextBox());
				this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->lesson3 = (gcnew System::Windows::Forms::Label());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->nextbutton = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				this->decorleft = (gcnew System::Windows::Forms::PictureBox());
				this->previousbutton = (gcnew System::Windows::Forms::PictureBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->BeginInit();
				this->SuspendLayout();
				// 
				// label12
				// 
				this->label12->AutoSize = true;
				this->label12->BackColor = System::Drawing::Color::White;
				this->label12->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label12->Location = System::Drawing::Point(295, 854);
				this->label12->Name = L"label12";
				this->label12->Size = System::Drawing::Size(171, 40);
				this->label12->TabIndex = 116;
				this->label12->Text = L"= shang ชัง";
				// 
				// label11
				// 
				this->label11->AutoSize = true;
				this->label11->BackColor = System::Drawing::Color::White;
				this->label11->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label11->Location = System::Drawing::Point(295, 613);
				this->label11->Name = L"label11";
				this->label11->Size = System::Drawing::Size(173, 40);
				this->label11->TabIndex = 115;
				this->label11->Text = L"= xian เซียน";
				// 
				// label10
				// 
				this->label10->AutoSize = true;
				this->label10->BackColor = System::Drawing::Color::White;
				this->label10->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label10->Location = System::Drawing::Point(275, 735);
				this->label10->Name = L"label10";
				this->label10->Size = System::Drawing::Size(308, 40);
				this->label10->TabIndex = 114;
				this->label10->Text = L"3.   sh ซือ   +    ang อัง";
				// 
				// label9
				// 
				this->label9->AutoSize = true;
				this->label9->BackColor = System::Drawing::Color::White;
				this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label9->Location = System::Drawing::Point(275, 494);
				this->label9->Name = L"label9";
				this->label9->Size = System::Drawing::Size(319, 40);
				this->label9->TabIndex = 113;
				this->label9->Text = L"2.   x ซี    +     ian  เอียน";
				// 
				// label8
				// 
				this->label8->AutoSize = true;
				this->label8->BackColor = System::Drawing::Color::White;
				this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label8->Location = System::Drawing::Point(295, 422);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(130, 40);
				this->label8->TabIndex = 112;
				this->label8->Text = L"= ma มา";
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->BackColor = System::Drawing::Color::White;
				this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label7->Location = System::Drawing::Point(275, 288);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(280, 40);
				this->label7->TabIndex = 111;
				this->label7->Text = L"1.   m มัว    +     a อา";
				this->label7->Click += gcnew System::EventHandler(this, &msound::label7_Click);
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->BackColor = System::Drawing::Color::White;
				this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label6->Location = System::Drawing::Point(1021, 799);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(465, 42);
				this->label6->TabIndex = 110;
				this->label6->Text = L"  玩儿    wán   +   er   =    wánr";
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->BackColor = System::Drawing::Color::White;
				this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label5->Location = System::Drawing::Point(1037, 672);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(406, 42);
				this->label5->TabIndex = 109;
				this->label5->Text = L" 那儿    nà   +   er   =    nàr";
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->BackColor = System::Drawing::Color::White;
				this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label4->Location = System::Drawing::Point(1007, 542);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(450, 42);
				this->label4->TabIndex = 108;
				this->label4->Text = L"  这儿    zhè   +   er   =    zhèr";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->BackColor = System::Drawing::Color::White;
				this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label3->Location = System::Drawing::Point(1007, 421);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(462, 42);
				this->label3->TabIndex = 107;
				this->label3->Text = L"  花儿    huā   +   er    =   huār ";
				// 
				// button10
				// 
				this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
				this->button10->Location = System::Drawing::Point(1429, 300);
				this->button10->Name = L"button10";
				this->button10->Size = System::Drawing::Size(57, 47);
				this->button10->TabIndex = 80;
				this->button10->UseVisualStyleBackColor = true;
				this->button10->Click += gcnew System::EventHandler(this, &msound::button10_Click);
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->BackColor = System::Drawing::Color::White;
				this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label1->Location = System::Drawing::Point(1003, 300);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(449, 42);
				this->label1->TabIndex = 106;
				this->label1->Text = L"อันนี้เป็นตัวอย่างการผสมเสียง 儿  er   ";
				// 
				// wanr
				// 
				this->wanr->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wanr.Image")));
				this->wanr->Location = System::Drawing::Point(1412, 844);
				this->wanr->Name = L"wanr";
				this->wanr->Size = System::Drawing::Size(57, 47);
				this->wanr->TabIndex = 98;
				this->wanr->UseVisualStyleBackColor = true;
				this->wanr->Click += gcnew System::EventHandler(this, &msound::wanr_Click);
				// 
				// nar
				// 
				this->nar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nar.Image")));
				this->nar->Location = System::Drawing::Point(1374, 717);
				this->nar->Name = L"nar";
				this->nar->Size = System::Drawing::Size(57, 47);
				this->nar->TabIndex = 97;
				this->nar->UseVisualStyleBackColor = true;
				this->nar->Click += gcnew System::EventHandler(this, &msound::nar_Click);
				// 
				// zher
				// 
				this->zher->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zher.Image")));
				this->zher->Location = System::Drawing::Point(1395, 600);
				this->zher->Name = L"zher";
				this->zher->Size = System::Drawing::Size(57, 47);
				this->zher->TabIndex = 96;
				this->zher->UseVisualStyleBackColor = true;
				this->zher->Click += gcnew System::EventHandler(this, &msound::zher_Click);
				// 
				// huar
				// 
				this->huar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"huar.Image")));
				this->huar->Location = System::Drawing::Point(1386, 468);
				this->huar->Name = L"huar";
				this->huar->Size = System::Drawing::Size(57, 47);
				this->huar->TabIndex = 95;
				this->huar->UseVisualStyleBackColor = true;
				this->huar->Click += gcnew System::EventHandler(this, &msound::huar_Click);
				// 
				// er4
				// 
				this->er4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"er4.Image")));
				this->er4->Location = System::Drawing::Point(1274, 844);
				this->er4->Name = L"er4";
				this->er4->Size = System::Drawing::Size(57, 47);
				this->er4->TabIndex = 93;
				this->er4->UseVisualStyleBackColor = true;
				this->er4->Click += gcnew System::EventHandler(this, &msound::er4_Click);
				// 
				// er3
				// 
				this->er3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"er3.Image")));
				this->er3->Location = System::Drawing::Point(1249, 717);
				this->er3->Name = L"er3";
				this->er3->Size = System::Drawing::Size(57, 47);
				this->er3->TabIndex = 92;
				this->er3->UseVisualStyleBackColor = true;
				this->er3->Click += gcnew System::EventHandler(this, &msound::er3_Click);
				// 
				// er2
				// 
				this->er2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"er2.Image")));
				this->er2->Location = System::Drawing::Point(1265, 600);
				this->er2->Name = L"er2";
				this->er2->Size = System::Drawing::Size(57, 47);
				this->er2->TabIndex = 91;
				this->er2->UseVisualStyleBackColor = true;
				this->er2->Click += gcnew System::EventHandler(this, &msound::er2_Click);
				// 
				// er
				// 
				this->er->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"er.Image")));
				this->er->Location = System::Drawing::Point(1249, 468);
				this->er->Name = L"er";
				this->er->Size = System::Drawing::Size(57, 47);
				this->er->TabIndex = 90;
				this->er->UseVisualStyleBackColor = true;
				this->er->Click += gcnew System::EventHandler(this, &msound::er_Click);
				// 
				// wan
				// 
				this->wan->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wan.Image")));
				this->wan->Location = System::Drawing::Point(1151, 844);
				this->wan->Name = L"wan";
				this->wan->Size = System::Drawing::Size(57, 47);
				this->wan->TabIndex = 84;
				this->wan->UseVisualStyleBackColor = true;
				this->wan->Click += gcnew System::EventHandler(this, &msound::wan_Click);
				// 
				// shang
				// 
				this->shang->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"shang.Image")));
				this->shang->Location = System::Drawing::Point(480, 850);
				this->shang->Name = L"shang";
				this->shang->Size = System::Drawing::Size(57, 47);
				this->shang->TabIndex = 89;
				this->shang->UseVisualStyleBackColor = true;
				this->shang->Click += gcnew System::EventHandler(this, &msound::shang_Click);
				// 
				// na
				// 
				this->na->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"na.Image")));
				this->na->Location = System::Drawing::Point(1140, 717);
				this->na->Name = L"na";
				this->na->Size = System::Drawing::Size(57, 47);
				this->na->TabIndex = 86;
				this->na->UseVisualStyleBackColor = true;
				this->na->Click += gcnew System::EventHandler(this, &msound::na_Click);
				// 
				// xian
				// 
				this->xian->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xian.Image")));
				this->xian->Location = System::Drawing::Point(480, 613);
				this->xian->Name = L"xian";
				this->xian->Size = System::Drawing::Size(57, 47);
				this->xian->TabIndex = 88;
				this->xian->UseVisualStyleBackColor = true;
				this->xian->Click += gcnew System::EventHandler(this, &msound::xian_Click);
				// 
				// zhe
				// 
				this->zhe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zhe.Image")));
				this->zhe->Location = System::Drawing::Point(1140, 600);
				this->zhe->Name = L"zhe";
				this->zhe->Size = System::Drawing::Size(57, 47);
				this->zhe->TabIndex = 87;
				this->zhe->UseVisualStyleBackColor = true;
				this->zhe->Click += gcnew System::EventHandler(this, &msound::zhe_Click);
				// 
				// ma
				// 
				this->ma->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ma.Image")));
				this->ma->Location = System::Drawing::Point(431, 416);
				this->ma->Name = L"ma";
				this->ma->Size = System::Drawing::Size(57, 47);
				this->ma->TabIndex = 94;
				this->ma->UseVisualStyleBackColor = true;
				this->ma->Click += gcnew System::EventHandler(this, &msound::ma_Click);
				// 
				// hua
				// 
				this->hua->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hua.Image")));
				this->hua->Location = System::Drawing::Point(1129, 468);
				this->hua->Name = L"hua";
				this->hua->Size = System::Drawing::Size(57, 47);
				this->hua->TabIndex = 85;
				this->hua->UseVisualStyleBackColor = true;
				this->hua->Click += gcnew System::EventHandler(this, &msound::hua_Click);
				// 
				// ang
				// 
				this->ang->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ang.Image")));
				this->ang->Location = System::Drawing::Point(495, 778);
				this->ang->Name = L"ang";
				this->ang->Size = System::Drawing::Size(57, 47);
				this->ang->TabIndex = 83;
				this->ang->UseVisualStyleBackColor = true;
				this->ang->Click += gcnew System::EventHandler(this, &msound::ang_Click);
				// 
				// sh
				// 
				this->sh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sh.Image")));
				this->sh->Location = System::Drawing::Point(335, 778);
				this->sh->Name = L"sh";
				this->sh->Size = System::Drawing::Size(57, 47);
				this->sh->TabIndex = 79;
				this->sh->UseVisualStyleBackColor = true;
				this->sh->Click += gcnew System::EventHandler(this, &msound::sh_Click);
				// 
				// ian
				// 
				this->ian->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ian.Image")));
				this->ian->Location = System::Drawing::Point(480, 537);
				this->ian->Name = L"ian";
				this->ian->Size = System::Drawing::Size(57, 47);
				this->ian->TabIndex = 82;
				this->ian->UseVisualStyleBackColor = true;
				this->ian->Click += gcnew System::EventHandler(this, &msound::ian_Click);
				// 
				// x
				// 
				this->x->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"x.Image")));
				this->x->Location = System::Drawing::Point(323, 537);
				this->x->Name = L"x";
				this->x->Size = System::Drawing::Size(57, 47);
				this->x->TabIndex = 78;
				this->x->UseVisualStyleBackColor = true;
				this->x->Click += gcnew System::EventHandler(this, &msound::x_Click);
				// 
				// a
				// 
				this->a->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a.Image")));
				this->a->Location = System::Drawing::Point(480, 331);
				this->a->Name = L"a";
				this->a->Size = System::Drawing::Size(57, 47);
				this->a->TabIndex = 81;
				this->a->UseVisualStyleBackColor = true;
				this->a->Click += gcnew System::EventHandler(this, &msound::a_Click);
				// 
				// m
				// 
				this->m->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"m.Image")));
				this->m->Location = System::Drawing::Point(335, 333);
				this->m->Name = L"m";
				this->m->Size = System::Drawing::Size(57, 47);
				this->m->TabIndex = 77;
				this->m->UseVisualStyleBackColor = true;
				this->m->Click += gcnew System::EventHandler(this, &msound::m_Click);
				// 
				// textBox4
				// 
				this->textBox4->BackColor = System::Drawing::Color::White;
				this->textBox4->Enabled = false;
				this->textBox4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->textBox4->Location = System::Drawing::Point(1002, 252);
				this->textBox4->Multiline = true;
				this->textBox4->Name = L"textBox4";
				this->textBox4->ReadOnly = true;
				this->textBox4->Size = System::Drawing::Size(597, 650);
				this->textBox4->TabIndex = 76;
				this->textBox4->Text = resources->GetString(L"textBox4.Text");
				// 
				// textBox3
				// 
				this->textBox3->BackColor = System::Drawing::Color::White;
				this->textBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
				this->textBox3->Enabled = false;
				this->textBox3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->textBox3->Location = System::Drawing::Point(267, 252);
				this->textBox3->Multiline = true;
				this->textBox3->Name = L"textBox3";
				this->textBox3->ReadOnly = true;
				this->textBox3->Size = System::Drawing::Size(576, 653);
				this->textBox3->TabIndex = 75;
				this->textBox3->Text = L"\r\n1.   m มัว    +     a อา\r\n\r\n\r\n   = ma มา  \r\n\r\n2.   x ซี    +     ian  เอียน\r\n\r\n"
					L"\r\n   = xian เซียน\r\n\r\n\r\n3.   sh ซือ   +    ang อัง\r\n\r\n\r\n   = shang ชัง";
				// 
				// progressBar1
				// 
				this->progressBar1->Location = System::Drawing::Point(443, 946);
				this->progressBar1->Name = L"progressBar1";
				this->progressBar1->Size = System::Drawing::Size(1000, 35);
				this->progressBar1->TabIndex = 101;
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label2->Location = System::Drawing::Point(748, 160);
				this->label2->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(424, 82);
				this->label2->TabIndex = 100;
				this->label2->Text = L"หลักการผสมเสียง";
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
				this->lesson3->Size = System::Drawing::Size(973, 150);
				this->lesson3->TabIndex = 99;
				this->lesson3->Text = L"Lesson 0 : pinyin";
				// 
				// pictureBox2
				// 
				this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
				this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox2->Location = System::Drawing::Point(999, 226);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(604, 679);
				this->pictureBox2->TabIndex = 117;
				this->pictureBox2->TabStop = false;
				// 
				// nextbutton
				// 
				this->nextbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextbutton.BackgroundImage")));
				this->nextbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->nextbutton->Location = System::Drawing::Point(1584, 897);
				this->nextbutton->Name = L"nextbutton";
				this->nextbutton->Size = System::Drawing::Size(282, 133);
				this->nextbutton->TabIndex = 105;
				this->nextbutton->TabStop = false;
				this->nextbutton->Click += gcnew System::EventHandler(this, &msound::nextbutton_Click);
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox1->Location = System::Drawing::Point(1442, 13);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(450, 450);
				this->pictureBox1->TabIndex = 103;
				this->pictureBox1->TabStop = false;
				// 
				// pictureBox3
				// 
				this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
				this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox3->Location = System::Drawing::Point(262, 226);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(584, 683);
				this->pictureBox3->TabIndex = 118;
				this->pictureBox3->TabStop = false;
				// 
				// decorleft
				// 
				this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
				this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->decorleft->Location = System::Drawing::Point(12, 13);
				this->decorleft->Name = L"decorleft";
				this->decorleft->Size = System::Drawing::Size(450, 450);
				this->decorleft->TabIndex = 102;
				this->decorleft->TabStop = false;
				// 
				// previousbutton
				// 
				this->previousbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousbutton.BackgroundImage")));
				this->previousbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->previousbutton->Location = System::Drawing::Point(33, 897);
				this->previousbutton->Name = L"previousbutton";
				this->previousbutton->Size = System::Drawing::Size(300, 130);
				this->previousbutton->TabIndex = 104;
				this->previousbutton->TabStop = false;
				this->previousbutton->Click += gcnew System::EventHandler(this, &msound::previousbutton_Click);
				// 
				// msound
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1904, 1041);
				this->Controls->Add(this->label12);
				this->Controls->Add(this->label11);
				this->Controls->Add(this->label10);
				this->Controls->Add(this->label9);
				this->Controls->Add(this->label8);
				this->Controls->Add(this->label7);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->button10);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->wanr);
				this->Controls->Add(this->nar);
				this->Controls->Add(this->zher);
				this->Controls->Add(this->huar);
				this->Controls->Add(this->er4);
				this->Controls->Add(this->er3);
				this->Controls->Add(this->er2);
				this->Controls->Add(this->er);
				this->Controls->Add(this->wan);
				this->Controls->Add(this->shang);
				this->Controls->Add(this->na);
				this->Controls->Add(this->xian);
				this->Controls->Add(this->zhe);
				this->Controls->Add(this->ma);
				this->Controls->Add(this->hua);
				this->Controls->Add(this->ang);
				this->Controls->Add(this->sh);
				this->Controls->Add(this->ian);
				this->Controls->Add(this->x);
				this->Controls->Add(this->a);
				this->Controls->Add(this->m);
				this->Controls->Add(this->textBox4);
				this->Controls->Add(this->textBox3);
				this->Controls->Add(this->progressBar1);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->lesson3);
				this->Controls->Add(this->pictureBox2);
				this->Controls->Add(this->nextbutton);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->decorleft);
				this->Controls->Add(this->previousbutton);
				this->MaximumSize = System::Drawing::Size(1920, 1080);
				this->MinimumSize = System::Drawing::Size(1918, 1030);
				this->Name = L"msound";
				this->Text = L"msound";
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		public:bool switchToformtone = false;
		public:bool switchToformex0 = false;
		private: System::Void previousbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			this -> Close();
			switchToformtone = true;
		}
		private: System::Void nextbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformex0 = true;
		}
		private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void m_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("มัว.wav"), NULL, SND_SYNC);
		}
		private: System::Void a_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("a.wav"), NULL, SND_SYNC);
		}
		private: System::Void ma_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ma.wav"), NULL, SND_SYNC);
		}
		private: System::Void x_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ซี.wav"), NULL, SND_SYNC);
		}
		private: System::Void ian_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ian.wav"), NULL, SND_SYNC);
		}
		private: System::Void xian_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("xian.wav"), NULL, SND_SYNC);
		}
		private: System::Void sh_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ซือ.wav"), NULL, SND_SYNC);
		}
		private: System::Void ang_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ang.wav"), NULL, SND_SYNC);
		}
		private: System::Void shang_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("shang.wav"), NULL, SND_SYNC);
		}
		private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("er.wav"), NULL, SND_SYNC);
		}
		private: System::Void hua_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("花.wav"), NULL, SND_SYNC);
		}
		private: System::Void er_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("er.wav"), NULL, SND_SYNC);
		}
		private: System::Void huar_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("花儿.wav"), NULL, SND_SYNC);
		}
		private: System::Void zhe_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("这.wav"), NULL, SND_SYNC);
		}
		private: System::Void er2_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("er.wav"), NULL, SND_SYNC);
		}
		private: System::Void zher_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("这儿.wav"), NULL, SND_SYNC);
		}
		private: System::Void na_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("那.wav"), NULL, SND_SYNC);
		}
		private: System::Void er3_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("er.wav"), NULL, SND_SYNC);
		}
		private: System::Void wan_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("玩.wav"), NULL, SND_SYNC);
		}
		private: System::Void er4_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("er.wav"), NULL, SND_SYNC);
		}
		private: System::Void nar_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("那儿.wav"), NULL, SND_SYNC);
		}
		private: System::Void wanr_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("玩儿.wav"), NULL, SND_SYNC);
		}
};
	}
