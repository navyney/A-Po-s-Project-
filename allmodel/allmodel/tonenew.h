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
				this->babachinese->Location = System::Drawing::Point(1367, 696);
				this->babachinese->Name = L"babachinese";
				this->babachinese->Size = System::Drawing::Size(69, 35);
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
				this->baba->Location = System::Drawing::Point(1364, 661);
				this->baba->Name = L"baba";
				this->baba->Size = System::Drawing::Size(79, 35);
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
				this->nimenchinese->Location = System::Drawing::Point(1050, 696);
				this->nimenchinese->Name = L"nimenchinese";
				this->nimenchinese->Size = System::Drawing::Size(73, 35);
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
				this->nimen->Location = System::Drawing::Point(1039, 661);
				this->nimen->Name = L"nimen";
				this->nimen->Size = System::Drawing::Size(96, 35);
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
				this->baisedechinese->Location = System::Drawing::Point(764, 696);
				this->baisedechinese->Name = L"baisedechinese";
				this->baisedechinese->Size = System::Drawing::Size(69, 35);
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
				this->baisede->Location = System::Drawing::Point(750, 661);
				this->baisede->Name = L"baisede";
				this->baisede->Size = System::Drawing::Size(94, 35);
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
				this->mamachinese->Location = System::Drawing::Point(432, 696);
				this->mamachinese->Name = L"mamachinese";
				this->mamachinese->Size = System::Drawing::Size(77, 35);
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
				this->mama->Location = System::Drawing::Point(424, 661);
				this->mama->Name = L"mama";
				this->mama->Size = System::Drawing::Size(93, 35);
				this->mama->TabIndex = 83;
				this->mama->Text = L"Māma";
				// 
				// label3
				// 
				this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label3->Location = System::Drawing::Point(833, 761);
				this->label3->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(439, 55);
				this->label3->TabIndex = 74;
				this->label3->Text = L"ถ้าไม่มีวรรณยุกต์ออกเสียงสั้น";
				// 
				// nextbutton
				// 
				this->nextbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextbutton.BackgroundImage")));
				this->nextbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->nextbutton->Location = System::Drawing::Point(1584, 897);
				this->nextbutton->Name = L"nextbutton";
				this->nextbutton->Size = System::Drawing::Size(282, 133);
				this->nextbutton->TabIndex = 81;
				this->nextbutton->TabStop = false;
				this->nextbutton->Click += gcnew System::EventHandler(this, &tonenew::nextbutton_Click);
				// 
				// previousbutton
				// 
				this->previousbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousbutton.BackgroundImage")));
				this->previousbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->previousbutton->Location = System::Drawing::Point(33, 897);
				this->previousbutton->Name = L"previousbutton";
				this->previousbutton->Size = System::Drawing::Size(300, 130);
				this->previousbutton->TabIndex = 80;
				this->previousbutton->TabStop = false;
				this->previousbutton->Click += gcnew System::EventHandler(this, &tonenew::previousbutton_Click);
				// 
				// progressBar2
				// 
				this->progressBar2->Location = System::Drawing::Point(443, 946);
				this->progressBar2->Name = L"progressBar2";
				this->progressBar2->Size = System::Drawing::Size(1000, 35);
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
				this->lesson3->Location = System::Drawing::Point(470, 10);
				this->lesson3->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->lesson3->Name = L"lesson3";
				this->lesson3->Size = System::Drawing::Size(973, 150);
				this->lesson3->TabIndex = 75;
				this->lesson3->Text = L"Lesson 0 : pinyin";
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox1->Location = System::Drawing::Point(360, 295);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(1190, 539);
				this->pictureBox1->TabIndex = 82;
				this->pictureBox1->TabStop = false;
				// 
				// pictureBox2
				// 
				this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
				this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox2->Location = System::Drawing::Point(1442, 13);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(450, 450);
				this->pictureBox2->TabIndex = 79;
				this->pictureBox2->TabStop = false;
				// 
				// decorleft
				// 
				this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
				this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->decorleft->Location = System::Drawing::Point(12, 13);
				this->decorleft->Name = L"decorleft";
				this->decorleft->Size = System::Drawing::Size(450, 450);
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
				this->label4->Location = System::Drawing::Point(828, 160);
				this->label4->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(264, 82);
				this->label4->TabIndex = 76;
				this->label4->Text = L"วรรณยุกต์";
				// 
				// notone
				// 
				this->notone->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"notone.BackgroundImage")));
				this->notone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->notone->Location = System::Drawing::Point(523, 676);
				this->notone->Name = L"notone";
				this->notone->Size = System::Drawing::Size(40, 40);
				this->notone->TabIndex = 131;
				this->notone->UseVisualStyleBackColor = true;
				this->notone->Click += gcnew System::EventHandler(this, &tonenew::notone_Click);
				// 
				// firsttone
				// 
				this->firsttone->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firsttone.BackgroundImage")));
				this->firsttone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->firsttone->Location = System::Drawing::Point(879, 676);
				this->firsttone->Name = L"firsttone";
				this->firsttone->Size = System::Drawing::Size(40, 40);
				this->firsttone->TabIndex = 132;
				this->firsttone->UseVisualStyleBackColor = true;
				this->firsttone->Click += gcnew System::EventHandler(this, &tonenew::firsttone_Click);
				// 
				// secondtone
				// 
				this->secondtone->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondtone.BackgroundImage")));
				this->secondtone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->secondtone->Location = System::Drawing::Point(1141, 676);
				this->secondtone->Name = L"secondtone";
				this->secondtone->Size = System::Drawing::Size(40, 40);
				this->secondtone->TabIndex = 133;
				this->secondtone->UseVisualStyleBackColor = true;
				this->secondtone->Click += gcnew System::EventHandler(this, &tonenew::secondtone_Click);
				// 
				// thirdtone
				// 
				this->thirdtone->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"thirdtone.BackgroundImage")));
				this->thirdtone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->thirdtone->Location = System::Drawing::Point(1449, 676);
				this->thirdtone->Name = L"thirdtone";
				this->thirdtone->Size = System::Drawing::Size(40, 40);
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
				this->label1->Location = System::Drawing::Point(681, 761);
				this->label1->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(162, 55);
				this->label1->TabIndex = 135;
				this->label1->Text = L"หมายเหตุ";
				// 
				// tonenew
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1904, 1041);
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
				this->MaximumSize = System::Drawing::Size(1920, 1080);
				this->MinimumSize = System::Drawing::Size(1918, 1030);
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

