#pragma once

namespace allmodel {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for HQuiz1
		/// </summary>
		public ref class HQuiz1 : public System::Windows::Forms::Form
		{
		public:
			HQuiz1(void)
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
			~HQuiz1()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::PictureBox^ pictureBox3;
		private: System::Windows::Forms::Button^ GoQuiz0;
		private: System::Windows::Forms::Button^ Golesson1;

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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HQuiz1::typeid));
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				this->GoQuiz0 = (gcnew System::Windows::Forms::Button());
				this->Golesson1 = (gcnew System::Windows::Forms::Button());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				this->SuspendLayout();
				// 
				// button1
				// 
				this->button1->BackColor = System::Drawing::Color::White;
				this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
				this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
				this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
				this->button1->FlatAppearance->BorderSize = 0;
				this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
				this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
				this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->button1->Location = System::Drawing::Point(12, 899);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(300, 130);
				this->button1->TabIndex = 0;
				this->button1->UseVisualStyleBackColor = false;
				this->button1->Click += gcnew System::EventHandler(this, &HQuiz1::button1_Click);
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox1->Location = System::Drawing::Point(12, 12);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(450, 450);
				this->pictureBox1->TabIndex = 1;
				this->pictureBox1->TabStop = false;
				// 
				// pictureBox2
				// 
				this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
				this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox2->Location = System::Drawing::Point(1456, 12);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(450, 450);
				this->pictureBox2->TabIndex = 2;
				this->pictureBox2->TabStop = false;
				// 
				// pictureBox3
				// 
				this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
				this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pictureBox3->Location = System::Drawing::Point(1519, 579);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(511, 487);
				this->pictureBox3->TabIndex = 3;
				this->pictureBox3->TabStop = false;
				// 
				// GoQuiz0
				// 
				this->GoQuiz0->Anchor = System::Windows::Forms::AnchorStyles::None;
				this->GoQuiz0->BackColor = System::Drawing::Color::White;
				this->GoQuiz0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GoQuiz0.BackgroundImage")));
				this->GoQuiz0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->GoQuiz0->Cursor = System::Windows::Forms::Cursors::Hand;
				this->GoQuiz0->FlatAppearance->BorderColor = System::Drawing::Color::White;
				this->GoQuiz0->FlatAppearance->BorderSize = 0;
				this->GoQuiz0->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
				this->GoQuiz0->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
				this->GoQuiz0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->GoQuiz0->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->GoQuiz0->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->GoQuiz0->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
				this->GoQuiz0->Location = System::Drawing::Point(637, 294);
				this->GoQuiz0->Name = L"GoQuiz0";
				this->GoQuiz0->Size = System::Drawing::Size(629, 168);
				this->GoQuiz0->TabIndex = 4;
				this->GoQuiz0->Text = L"Quiz 1";
				this->GoQuiz0->UseVisualStyleBackColor = false;
				this->GoQuiz0->Click += gcnew System::EventHandler(this, &HQuiz1::GoQuiz0_Click);
				// 
				// Golesson1
				// 
				this->Golesson1->Anchor = System::Windows::Forms::AnchorStyles::None;
				this->Golesson1->BackColor = System::Drawing::Color::White;
				this->Golesson1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Golesson1.BackgroundImage")));
				this->Golesson1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Golesson1->Cursor = System::Windows::Forms::Cursors::Hand;
				this->Golesson1->FlatAppearance->BorderColor = System::Drawing::Color::White;
				this->Golesson1->FlatAppearance->BorderSize = 0;
				this->Golesson1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
				this->Golesson1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
				this->Golesson1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->Golesson1->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->Golesson1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->Golesson1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
				this->Golesson1->Location = System::Drawing::Point(637, 568);
				this->Golesson1->Name = L"Golesson1";
				this->Golesson1->Size = System::Drawing::Size(629, 168);
				this->Golesson1->TabIndex = 5;
				this->Golesson1->Text = L"Lesson 2 : Family";
				this->Golesson1->UseVisualStyleBackColor = false;
				this->Golesson1->Click += gcnew System::EventHandler(this, &HQuiz1::Golesson1_Click);
				// 
				// HQuiz1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::White;
				this->ClientSize = System::Drawing::Size(1904, 1041);
				this->Controls->Add(this->Golesson1);
				this->Controls->Add(this->GoQuiz0);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->pictureBox2);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->button1);
				this->Location = System::Drawing::Point(1920, 1080);
				this->MaximumSize = System::Drawing::Size(1920, 1080);
				this->Name = L"HQuiz1";
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				this->Text = L"HQuiz1";
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				this->ResumeLayout(false);

			}
#pragma endregion
		public:bool switchToformcon1 = false;
		public:bool switchToformQ1 = false;
		private: System::Void GoQuiz0_Click(System::Object^ sender, System::EventArgs^ e) { // Quiz 1
			this->Close();
			switchToformQ1 = true;
		}
		private: System::Void Golesson1_Click(System::Object^ sender, System::EventArgs^ e) {// lesson 2

		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformcon1 = true;
		}
		};
	}
