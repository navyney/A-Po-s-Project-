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
	/// Summary for one
	/// </summary>
	public ref class one : public System::Windows::Forms::Form
	{
	public:
		one(void)
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
		~one()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



	private: System::Windows::Forms::ProgressBar^ progressBar2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ Next;
	private: System::Windows::Forms::PictureBox^ Previous;
	private: System::Windows::Forms::Button^ Button11;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(one::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Next = (gcnew System::Windows::Forms::PictureBox());
			this->Previous = (gcnew System::Windows::Forms::PictureBox());
			this->Button11 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Next))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Previous))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label3->Location = System::Drawing::Point(860, 529);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1145, 852);
			this->label3->TabIndex = 0;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label2->Location = System::Drawing::Point(1500, 308);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(824, 165);
			this->label2->TabIndex = 1;
			this->label2->Text = L"conversation";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 87.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label1->Location = System::Drawing::Point(940, 19);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1937, 301);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Lesson 1 : Hello!";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(2212, 787);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(800, 654);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// progressBar2
			// 
			this->progressBar2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->progressBar2->Location = System::Drawing::Point(886, 1819);
			this->progressBar2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(2000, 67);
			this->progressBar2->TabIndex = 83;
			this->progressBar2->Value = 100;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(22, 19);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(900, 865);
			this->pictureBox1->TabIndex = 84;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(2884, 23);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(900, 865);
			this->pictureBox3->TabIndex = 85;
			this->pictureBox3->TabStop = false;
			// 
			// Next
			// 
			this->Next->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Next->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Next.BackgroundImage")));
			this->Next->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Next->Location = System::Drawing::Point(3168, 1725);
			this->Next->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(564, 256);
			this->Next->TabIndex = 86;
			this->Next->TabStop = false;
			this->Next->Click += gcnew System::EventHandler(this, &one::Next_Click);
			// 
			// Previous
			// 
			this->Previous->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Previous->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Previous.BackgroundImage")));
			this->Previous->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Previous->Location = System::Drawing::Point(66, 1725);
			this->Previous->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Previous->Name = L"Previous";
			this->Previous->Size = System::Drawing::Size(600, 250);
			this->Previous->TabIndex = 87;
			this->Previous->TabStop = false;
			this->Previous->Click += gcnew System::EventHandler(this, &one::Previous_Click);
			// 
			// Button11
			// 
			this->Button11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button11.BackgroundImage")));
			this->Button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Button11->Location = System::Drawing::Point(650, 637);
			this->Button11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Button11->Name = L"Button11";
			this->Button11->Size = System::Drawing::Size(174, 144);
			this->Button11->TabIndex = 92;
			this->Button11->Text = L"\r\n";
			this->Button11->UseVisualStyleBackColor = true;
			this->Button11->Click += gcnew System::EventHandler(this, &one::Button11_Click);
			// 
			// one
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(3808, 2002);
			this->Controls->Add(this->Button11);
			this->Controls->Add(this->Previous);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"one";
			this->Text = L"one";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &one::one_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Next))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Previous))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:bool switchToformnum = false;
		public:bool switchToformHQ1 = false;
		private: System::Void one_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void Previous_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformnum = true;
		}
		private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformHQ1 = true;

		}
		private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("Unit1.wav"), NULL, SND_SYNC);
		}
	};
}
