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
		/// Summary for praTwo
		/// </summary>
		public ref class praTwo : public System::Windows::Forms::Form
		{
			int numpage = 1;
		public:
			praTwo(void)
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
			~praTwo()
			{
				if (components)
				{
					delete components;
				}
			}

		protected:

		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::PictureBox^ pictureBox1;



		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label1;



		private: System::Windows::Forms::PictureBox^ pictureBox3;
		private: System::Windows::Forms::PictureBox^ Previous;
		private: System::Windows::Forms::ProgressBar^ progressBar1;

		private: System::Windows::Forms::PictureBox^ Next;
		private: System::Windows::Forms::PictureBox^ pictureBox4;
		private: System::Windows::Forms::PictureBox^ pictureBox5;
		private: System::Windows::Forms::Button^ Button11;





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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(praTwo::typeid));
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				this->Previous = (gcnew System::Windows::Forms::PictureBox());
				this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
				this->Next = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
				this->Button11 = (gcnew System::Windows::Forms::Button());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Previous))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Next))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
				this->SuspendLayout();
				// 
				// pictureBox2
				// 
				this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
				this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox2->Location = System::Drawing::Point(1150, 320);
				this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(300, 240);
				this->pictureBox2->TabIndex = 7;
				this->pictureBox2->TabStop = false;
				this->pictureBox2->Click += gcnew System::EventHandler(this, &praTwo::pictureBox2_Click);
				// 
				// pictureBox1
				// 
				this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pictureBox1->Location = System::Drawing::Point(1250, 360);
				this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(400, 395);
				this->pictureBox1->TabIndex = 1;
				this->pictureBox1->TabStop = false;
				this->pictureBox1->Click += gcnew System::EventHandler(this, &praTwo::pictureBox1_Click);
				// 
				// label3
				// 
				this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Yu Mincho", 23));
				this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label3->Location = System::Drawing::Point(402, 278);
				this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(888, 600);
				this->label3->TabIndex = 6;
				this->label3->Text = resources->GetString(L"label3.Text");
				this->label3->Click += gcnew System::EventHandler(this, &praTwo::label3_Click);
				// 
				// label4
				// 
				this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"Yu Mincho", 23));
				this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label4->Location = System::Drawing::Point(416, 278);
				this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(438, 600);
				this->label4->TabIndex = 8;
				this->label4->Text = resources->GetString(L"label4.Text");
				this->label4->Click += gcnew System::EventHandler(this, &praTwo::label4_Click);
				// 
				// label2
				// 
				this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label2->Location = System::Drawing::Point(745, 160);
				this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(413, 82);
				this->label2->TabIndex = 1;
				this->label2->Text = L"conversation";
				this->label2->Click += gcnew System::EventHandler(this, &praTwo::label2_Click);
				// 
				// label1
				// 
				this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 87.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label1->Location = System::Drawing::Point(452, 10);
				this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(1001, 150);
				this->label1->TabIndex = 0;
				this->label1->Text = L"Lesson 2 : Family";
				this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->label1->Click += gcnew System::EventHandler(this, &praTwo::label1_Click);
				// 
				// pictureBox3
				// 
				this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
				this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pictureBox3->Location = System::Drawing::Point(1150, 580);
				this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(300, 240);
				this->pictureBox3->TabIndex = 17;
				this->pictureBox3->TabStop = false;
				this->pictureBox3->Click += gcnew System::EventHandler(this, &praTwo::pictureBox3_Click);
				// 
				// Previous
				// 
				this->Previous->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Previous->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Previous.BackgroundImage")));
				this->Previous->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Previous->Location = System::Drawing::Point(33, 897);
				this->Previous->Name = L"Previous";
				this->Previous->Size = System::Drawing::Size(300, 130);
				this->Previous->TabIndex = 89;
				this->Previous->TabStop = false;
				this->Previous->Click += gcnew System::EventHandler(this, &praTwo::Previous_Click);
				// 
				// progressBar1
				// 
				this->progressBar1->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->progressBar1->Location = System::Drawing::Point(445, 946);
				this->progressBar1->Name = L"progressBar1";
				this->progressBar1->Size = System::Drawing::Size(1000, 35);
				this->progressBar1->TabIndex = 88;
				this->progressBar1->Click += gcnew System::EventHandler(this, &praTwo::progressBar1_Click);
				// 
				// Next
				// 
				this->Next->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Next->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Next.BackgroundImage")));
				this->Next->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Next->Location = System::Drawing::Point(1584, 897);
				this->Next->Name = L"Next";
				this->Next->Size = System::Drawing::Size(282, 133);
				this->Next->TabIndex = 90;
				this->Next->TabStop = false;
				this->Next->Click += gcnew System::EventHandler(this, &praTwo::Next_Click);
				// 
				// pictureBox4
				// 
				this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
				this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pictureBox4->Location = System::Drawing::Point(12, 12);
				this->pictureBox4->Name = L"pictureBox4";
				this->pictureBox4->Size = System::Drawing::Size(450, 450);
				this->pictureBox4->TabIndex = 91;
				this->pictureBox4->TabStop = false;
				this->pictureBox4->Click += gcnew System::EventHandler(this, &praTwo::pictureBox4_Click);
				// 
				// pictureBox5
				// 
				this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
				this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pictureBox5->Location = System::Drawing::Point(1442, 12);
				this->pictureBox5->Name = L"pictureBox5";
				this->pictureBox5->Size = System::Drawing::Size(450, 450);
				this->pictureBox5->TabIndex = 92;
				this->pictureBox5->TabStop = false;
				this->pictureBox5->Click += gcnew System::EventHandler(this, &praTwo::pictureBox5_Click);
				// 
				// Button11
				// 
				this->Button11->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button11.BackgroundImage")));
				this->Button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button11->Location = System::Drawing::Point(325, 331);
				this->Button11->Margin = System::Windows::Forms::Padding(2);
				this->Button11->Name = L"Button11";
				this->Button11->Size = System::Drawing::Size(73, 75);
				this->Button11->TabIndex = 93;
				this->Button11->Text = L"\r\n";
				this->Button11->UseVisualStyleBackColor = true;
				this->Button11->Click += gcnew System::EventHandler(this, &praTwo::Button11_Click);
				// 
				// praTwo
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::White;
				this->ClientSize = System::Drawing::Size(1904, 1041);
				this->Controls->Add(this->Button11);
				this->Controls->Add(this->Next);
				this->Controls->Add(this->Previous);
				this->Controls->Add(this->progressBar1);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->pictureBox2);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->pictureBox4);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->pictureBox5);
				this->Margin = System::Windows::Forms::Padding(2);
				this->MaximumSize = System::Drawing::Size(1920, 1080);
				this->MinimumSize = System::Drawing::Size(1918, 1030);
				this->Name = L"praTwo";
				this->Text = L"praTwo";
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				this->Load += gcnew System::EventHandler(this, &praTwo::praTwo_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Previous))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Next))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		private: System::Void changepage(int numpage) {
			switch (numpage) {
			case 1:
				this->progressBar1->Value = 6.25 * 15;
				label3->Show();
				pictureBox1->Show();
				label4->Hide();
				pictureBox2->Hide();
				pictureBox3->Hide();
				break;

			case 2:
				this->progressBar1->Value = 6.25 * 16;
				label3->Hide();
				pictureBox1->Hide();
				label4->Show();
				pictureBox2->Show();
				pictureBox3->Show();
				break;
			}
		}
		private: System::Void praTwo_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		public:bool switchToformHQ2 = false;
		public:bool switchToformvo2 = false;
		private: System::Void Previous_Click(System::Object^ sender, System::EventArgs^ e) {
			if (numpage > 1) {
				numpage--;
				changepage(numpage);
			}
			else {
				numpage + 1;
				changepage(numpage);
				this->Close();
				switchToformvo2 = true;
			}

		}
		private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
			if (numpage < 2) {
				numpage++;
				changepage(numpage);
			}
			else {
				numpage+1;
				changepage(numpage);
				this->Close();
				switchToformHQ2 = true;
			}
		}
		private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) {
			switch (numpage) {
			case 1:
				PlaySound(TEXT("Unit2 con1.wav"), NULL, SND_SYNC);
				break;
			case 2:
				PlaySound(TEXT("Unit2 con2.wav"), NULL, SND_SYNC);
				break;
			}
		}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
	}

