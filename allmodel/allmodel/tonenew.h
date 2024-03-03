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
		/// Summary for tonenew
		/// </summary>
		public ref class tonenew : public System::Windows::Forms::Form
		{
		public:
			tonenew(void)
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
			~tonenew()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^ babachinese;
		protected:

		private: System::Windows::Forms::Label^ baba;
		protected:

		private: System::Windows::Forms::Label^ nimenchinese;

		private: System::Windows::Forms::Label^ nimen;

		private: System::Windows::Forms::Label^ baisedechinese;

		private: System::Windows::Forms::Label^ baisede;

		private: System::Windows::Forms::Label^ mamachinese;

		private: System::Windows::Forms::Label^ mama;

		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::PictureBox^ nextbutton;
		private: System::Windows::Forms::PictureBox^ previousbutton;
		private: System::Windows::Forms::ProgressBar^ progressBar2;
		private: System::Windows::Forms::Label^ lesson3;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::PictureBox^ decorleft;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Button^ notone;
		private: System::Windows::Forms::Button^ firsttone;
		private: System::Windows::Forms::Button^ secondtone;
		private: System::Windows::Forms::Button^ thirdtone;
		private: System::Windows::Forms::Label^ label1;

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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(tonenew::typeid));
				this->babachinese = (gcnew System::Windows::Forms::Label());
				this->baba = (gcnew System::Windows::Forms::Label());
				this->nimenchinese = (gcnew System::Windows::Forms::Label());
				this->nimen = (gcnew System::Windows::Forms::Label());
				this->baisedechinese = (gcnew System::Windows::Forms::Label());
				this->baisede = (gcnew System::Windows::Forms::Label());
				this->mamachinese = (gcnew System::Windows::Forms::Label());
				this->mama = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->nextbutton = (gcnew System::Windows::Forms::PictureBox());
				this->previousbutton = (gcnew System::Windows::Forms::PictureBox());
				this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
				this->lesson3 = (gcnew System::Windows::Forms::Label());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->decorleft = (gcnew System::Windows::Forms::PictureBox());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->notone = (gcnew System::Windows::Forms::Button());
				this->firsttone = (gcnew System::Windows::Forms::Button());
				this->secondtone = (gcnew System::Windows::Forms::Button());
				this->thirdtone = (gcnew System::Windows::Forms::Button());
				this->label1 = (gcnew System::Windows::Forms::Label());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->BeginInit();
				this->SuspendLayout();
				// 
				// babachinese
				// 
				this->babachinese->AutoSize = true;
				this->babachinese->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->babachinese->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->babachinese->Location = System::Drawing::Point(2734, 1338);
				this->babachinese->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
				this->babachinese->Name = L"babachinese";
				this->babachinese->Size = System::Drawing::Size(138, 69);
				this->babachinese->TabIndex = 90;
				this->babachinese->Text = L"爸爸";
				// 
				// baba
				// 
				this->baba->AutoSize = true;
				this->baba->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->baba->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->baba->Location = System::Drawing::Point(2728, 1271);
				this->baba->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
				this->baba->Name = L"baba";
				this->baba->Size = System::Drawing::Size(158, 69);
				this->baba->TabIndex = 89;
				this->baba->Text = L"Bàba";
				// 
				// nimenchinese
				// 
				this->nimenchinese->AutoSize = true;
				this->nimenchinese->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->nimenchinese->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->nimenchinese->Location = System::Drawing::Point(2100, 1338);
				this->nimenchinese->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
				this->nimenchinese->Name = L"nimenchinese";
				this->nimenchinese->Size = System::Drawing::Size(144, 69);
				this->nimenchinese->TabIndex = 88;
				this->nimenchinese->Text = L"你们";
				// 
				// nimen
				// 
				this->nimen->AutoSize = true;
				this->nimen->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->nimen->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->nimen->Location = System::Drawing::Point(2078, 1271);
				this->nimen->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
				this->nimen->Name = L"nimen";
				this->nimen->Size = System::Drawing::Size(191, 69);
				this->nimen->TabIndex = 87;
				this->nimen->Text = L"Nǐmen";
				// 
				// baisedechinese
				// 
				this->baisedechinese->AutoSize = true;
				this->baisedechinese->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->baisedechinese->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->baisedechinese->Location = System::Drawing::Point(1528, 1338);
				this->baisedechinese->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
				this->baisedechinese->Name = L"baisedechinese";
				this->baisedechinese->Size = System::Drawing::Size(138, 69);
				this->baisedechinese->TabIndex = 86;
				this->baisedechinese->Text = L"白的";
				// 
				// baisede
				// 
				this->baisede->AutoSize = true;
				this->baisede->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->baisede->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->baisede->Location = System::Drawing::Point(1500, 1271);
				this->baisede->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
				this->baisede->Name = L"baisede";
				this->baisede->Size = System::Drawing::Size(187, 69);
				this->baisede->TabIndex = 85;
				this->baisede->Text = L"Bái de";
				// 
				// mamachinese
				// 
				this->mamachinese->AutoSize = true;
				this->mamachinese->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->mamachinese->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->mamachinese->Location = System::Drawing::Point(864, 1338);
				this->mamachinese->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
				this->mamachinese->Name = L"mamachinese";
				this->mamachinese->Size = System::Drawing::Size(150, 69);
				this->mamachinese->TabIndex = 84;
				this->mamachinese->Text = L"妈妈";
				// 
				// mama
				// 
				this->mama->AutoSize = true;
				this->mama->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->mama->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->mama->Location = System::Drawing::Point(848, 1271);
				this->mama->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
				this->mama->Name = L"mama";
				this->mama->Size = System::Drawing::Size(186, 69);
				this->mama->TabIndex = 83;
				this->mama->Text = L"Māma";
				// 
				// label3
				// 
				this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label3->Location = System::Drawing::Point(1666, 1463);
				this->label3->Margin = System::Windows::Forms::Padding(24, 0, 24, 0);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(878, 106);
				this->label3->TabIndex = 74;
				this->label3->Text = L"ถ้าไม่มีวรรณยุกต์ออกเสียงสั้น";
				// 
				// nextbutton
				// 
				this->nextbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextbutton.BackgroundImage")));
				this->nextbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->nextbutton->Location = System::Drawing::Point(3168, 1725);
				this->nextbutton->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
				this->nextbutton->Name = L"nextbutton";
				this->nextbutton->Size = System::Drawing::Size(564, 256);
				this->nextbutton->TabIndex = 81;
				this->nextbutton->TabStop = false;
				this->nextbutton->Click += gcnew System::EventHandler(this, &tonenew::nextbutton_Click);
				// 
				// previousbutton
				// 
				this->previousbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousbutton.BackgroundImage")));
				this->previousbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->previousbutton->Location = System::Drawing::Point(66, 1725);
				this->previousbutton->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
				this->previousbutton->Name = L"previousbutton";
				this->previousbutton->Size = System::Drawing::Size(600, 250);
				this->previousbutton->TabIndex = 80;
				this->previousbutton->TabStop = false;
				this->previousbutton->Click += gcnew System::EventHandler(this, &tonenew::previousbutton_Click);
				// 
				// progressBar2
				// 
				this->progressBar2->Location = System::Drawing::Point(886, 1819);
				this->progressBar2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
				this->progressBar2->Name = L"progressBar2";
				this->progressBar2->Size = System::Drawing::Size(2000, 67);
				this->progressBar2->TabIndex = 77;
				this->progressBar2->Value = 60;
				// 
				// lesson3
				// 
				this->lesson3->AutoSize = true;
				this->lesson3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 87.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lesson3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->lesson3->Location = System::Drawing::Point(940, 19);
				this->lesson3->Margin = System::Windows::Forms::Padding(32, 0, 32, 0);
				this->lesson3->Name = L"lesson3";
				this->lesson3->Size = System::Drawing::Size(1946, 301);
				this->lesson3->TabIndex = 75;
				this->lesson3->Text = L"Lesson 0 : pinyin";
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox1->Location = System::Drawing::Point(720, 567);
				this->pictureBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(2380, 1037);
				this->pictureBox1->TabIndex = 82;
				this->pictureBox1->TabStop = false;
				// 
				// pictureBox2
				// 
				this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
				this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox2->Location = System::Drawing::Point(2884, 25);
				this->pictureBox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(900, 865);
				this->pictureBox2->TabIndex = 79;
				this->pictureBox2->TabStop = false;
				// 
				// decorleft
				// 
				this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
				this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->decorleft->Location = System::Drawing::Point(24, 25);
				this->decorleft->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
				this->decorleft->Name = L"decorleft";
				this->decorleft->Size = System::Drawing::Size(900, 865);
				this->decorleft->TabIndex = 78;
				this->decorleft->TabStop = false;
				this->decorleft->Click += gcnew System::EventHandler(this, &tonenew::decorleft_Click);
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label4->Location = System::Drawing::Point(1656, 308);
				this->label4->Margin = System::Windows::Forms::Padding(32, 0, 32, 0);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(529, 165);
				this->label4->TabIndex = 76;
				this->label4->Text = L"วรรณยุกต์";
				// 
				// notone
				// 
				this->notone->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"notone.BackgroundImage")));
				this->notone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->notone->Location = System::Drawing::Point(1046, 1300);
				this->notone->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
				this->notone->Name = L"notone";
				this->notone->Size = System::Drawing::Size(80, 77);
				this->notone->TabIndex = 131;
				this->notone->UseVisualStyleBackColor = true;
				this->notone->Click += gcnew System::EventHandler(this, &tonenew::notone_Click);
				// 
				// firsttone
				// 
				this->firsttone->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firsttone.BackgroundImage")));
				this->firsttone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->firsttone->Location = System::Drawing::Point(1758, 1300);
				this->firsttone->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
				this->firsttone->Name = L"firsttone";
				this->firsttone->Size = System::Drawing::Size(80, 77);
				this->firsttone->TabIndex = 132;
				this->firsttone->UseVisualStyleBackColor = true;
				this->firsttone->Click += gcnew System::EventHandler(this, &tonenew::firsttone_Click);
				// 
				// secondtone
				// 
				this->secondtone->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondtone.BackgroundImage")));
				this->secondtone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->secondtone->Location = System::Drawing::Point(2282, 1300);
				this->secondtone->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
				this->secondtone->Name = L"secondtone";
				this->secondtone->Size = System::Drawing::Size(80, 77);
				this->secondtone->TabIndex = 133;
				this->secondtone->UseVisualStyleBackColor = true;
				this->secondtone->Click += gcnew System::EventHandler(this, &tonenew::secondtone_Click);
				// 
				// thirdtone
				// 
				this->thirdtone->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"thirdtone.BackgroundImage")));
				this->thirdtone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->thirdtone->Location = System::Drawing::Point(2898, 1300);
				this->thirdtone->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
				this->thirdtone->Name = L"thirdtone";
				this->thirdtone->Size = System::Drawing::Size(80, 77);
				this->thirdtone->TabIndex = 134;
				this->thirdtone->UseVisualStyleBackColor = true;
				this->thirdtone->Click += gcnew System::EventHandler(this, &tonenew::thirdtone_Click);
				// 
				// label1
				// 
				this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label1->Location = System::Drawing::Point(1362, 1463);
				this->label1->Margin = System::Windows::Forms::Padding(24, 0, 24, 0);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(324, 106);
				this->label1->TabIndex = 135;
				this->label1->Text = L"หมายเหตุ";
				// 
				// tonenew
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(3808, 2002);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->thirdtone);
				this->Controls->Add(this->secondtone);
				this->Controls->Add(this->firsttone);
				this->Controls->Add(this->notone);
				this->Controls->Add(this->babachinese);
				this->Controls->Add(this->baba);
				this->Controls->Add(this->nimenchinese);
				this->Controls->Add(this->nimen);
				this->Controls->Add(this->baisedechinese);
				this->Controls->Add(this->baisede);
				this->Controls->Add(this->mamachinese);
				this->Controls->Add(this->mama);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->nextbutton);
				this->Controls->Add(this->previousbutton);
				this->Controls->Add(this->progressBar2);
				this->Controls->Add(this->lesson3);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->pictureBox2);
				this->Controls->Add(this->decorleft);
				this->Controls->Add(this->label4);
				this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
				this->Name = L"tonenew";
				this->Text = L"tonenew";
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		public:bool switchToformvo = false;
		 public:bool switchToformmix = false;
		private: System::Void decorleft_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void previousbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformvo = true;
		}
		private: System::Void nextbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformmix = true;
		}
		private: System::Void notone_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("妈妈.wav"), NULL, SND_SYNC);
		}
		private: System::Void firsttone_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("白的.wav"), NULL, SND_SYNC);
		}
		private: System::Void secondtone_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("你们.wav"), NULL, SND_SYNC);
		}
		private: System::Void thirdtone_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("爸爸.wav"), NULL, SND_SYNC);
		}
};
	}

