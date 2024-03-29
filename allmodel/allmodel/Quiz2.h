﻿#pragma once

namespace allmodel {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for Quiz2
		/// </summary>
		public ref class Quiz2 : public System::Windows::Forms::Form
		{
			int correctAnswer;
			int questionNumber = 1;
			int score = 0;
			int totalQuestion = 13 + 1;
			String^ msg;



		private: System::Windows::Forms::Button^ button7;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Button^ button5;
		private: System::Windows::Forms::Button^ button6;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::TextBox^ textBox1;
		private: System::Windows::Forms::PictureBox^ pictureBox3;


		private: array<int>^ userAnswers;
		public:
			Quiz2(void)
			{
				InitializeComponent();
				userAnswers = gcnew array<int>(totalQuestion);
				askquestion(questionNumber);
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~Quiz2()
			{
				if (components)
				{
					delete components;
				}
			}

		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

			void InitializeComponent(void)
			{
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Quiz2::typeid));
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->button5 = (gcnew System::Windows::Forms::Button());
				this->button6 = (gcnew System::Windows::Forms::Button());
				this->button7 = (gcnew System::Windows::Forms::Button());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->button3 = (gcnew System::Windows::Forms::Button());
				this->button4 = (gcnew System::Windows::Forms::Button());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				this->SuspendLayout();
				// 
				// label1
				// 
				this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 87.75F));
				this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label1->Location = System::Drawing::Point(549, 9);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(822, 150);
				this->label1->TabIndex = 0;
				this->label1->Text = L"Quiz Lesson 2";
				// 
				// button5
				// 
				this->button5->BackColor = System::Drawing::Color::White;
				this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
				this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
				this->button5->FlatAppearance->BorderColor = System::Drawing::Color::White;
				this->button5->FlatAppearance->BorderSize = 0;
				this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
				this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
				this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button5->Location = System::Drawing::Point(1584, 897);
				this->button5->Name = L"button5";
				this->button5->Size = System::Drawing::Size(300, 130);
				this->button5->TabIndex = 2;
				this->button5->UseVisualStyleBackColor = false;
				this->button5->Click += gcnew System::EventHandler(this, &Quiz2::button5_Click);
				// 
				// button6
				// 
				this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
				this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
				this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
				this->button6->FlatAppearance->BorderSize = 0;
				this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
				this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
				this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button6->Location = System::Drawing::Point(33, 897);
				this->button6->Name = L"button6";
				this->button6->Size = System::Drawing::Size(300, 130);
				this->button6->TabIndex = 3;
				this->button6->UseVisualStyleBackColor = true;
				this->button6->Click += gcnew System::EventHandler(this, &Quiz2::button6_Click);
				// 
				// button7
				// 
				this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
				this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
				this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
				this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
				this->button7->FlatAppearance->BorderSize = 0;
				this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
				this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
				this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button7->ForeColor = System::Drawing::SystemColors::Control;
				this->button7->Location = System::Drawing::Point(833, 897);
				this->button7->Name = L"button7";
				this->button7->Size = System::Drawing::Size(262, 132);
				this->button7->TabIndex = 5;
				this->button7->Text = L"TRY AGAIN";
				this->button7->UseVisualStyleBackColor = true;
				this->button7->Click += gcnew System::EventHandler(this, &Quiz2::button7_Click);
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pictureBox1->Location = System::Drawing::Point(12, 13);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(450, 450);
				this->pictureBox1->TabIndex = 6;
				this->pictureBox1->TabStop = false;
				// 
				// pictureBox2
				// 
				this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
				this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pictureBox2->Location = System::Drawing::Point(1463, 13);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(450, 450);
				this->pictureBox2->TabIndex = 7;
				this->pictureBox2->TabStop = false;
				// 
				// button1
				// 
				this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
				this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button1->ForeColor = System::Drawing::Color::Black;
				this->button1->Location = System::Drawing::Point(348, 617);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(556, 71);
				this->button1->TabIndex = 1;
				this->button1->Tag = L"1";
				this->button1->Text = L"Ans1";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &Quiz2::checkAnswerEvent);
				// 
				// button2
				// 
				this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
				this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button2->Location = System::Drawing::Point(1030, 617);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(556, 71);
				this->button2->TabIndex = 2;
				this->button2->Tag = L"2";
				this->button2->Text = L"Ans2";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &Quiz2::checkAnswerEvent);
				// 
				// button3
				// 
				this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
				this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button3->Location = System::Drawing::Point(348, 719);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(556, 71);
				this->button3->TabIndex = 3;
				this->button3->Tag = L"3";
				this->button3->Text = L"Ans3";
				this->button3->UseVisualStyleBackColor = true;
				this->button3->Click += gcnew System::EventHandler(this, &Quiz2::checkAnswerEvent);
				// 
				// button4
				// 
				this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
				this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button4->Location = System::Drawing::Point(1030, 719);
				this->button4->Name = L"button4";
				this->button4->Size = System::Drawing::Size(556, 71);
				this->button4->TabIndex = 4;
				this->button4->Tag = L"4";
				this->button4->Text = L"Ans4";
				this->button4->UseVisualStyleBackColor = true;
				this->button4->Click += gcnew System::EventHandler(this, &Quiz2::checkAnswerEvent);
				// 
				// label2
				// 
				this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 72));
				this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label2->Location = System::Drawing::Point(515, 250);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(891, 286);
				this->label2->TabIndex = 5;
				this->label2->Text = L"QUESTION";
				this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48));
				this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label3->Location = System::Drawing::Point(847, 137);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(228, 82);
				this->label3->TabIndex = 4;
				this->label3->Text = L"Family";
				// 
				// textBox1
				// 
				this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
				this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48));
				this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->textBox1->Location = System::Drawing::Point(800, 650);
				this->textBox1->Multiline = true;
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(300, 100);
				this->textBox1->TabIndex = 0;
				this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				// 
				// pictureBox3
				// 
				this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
				this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pictureBox3->Location = System::Drawing::Point(173, 222);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(1566, 648);
				this->pictureBox3->TabIndex = 8;
				this->pictureBox3->TabStop = false;
				// 
				// Quiz2
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::White;
				this->ClientSize = System::Drawing::Size(1904, 1041);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->button6);
				this->Controls->Add(this->button5);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->textBox1);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->button4);
				this->Controls->Add(this->button3);
				this->Controls->Add(this->button2);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->button7);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->pictureBox2);
				this->MaximumSize = System::Drawing::Size(1920, 1080);
				this->MinimumSize = System::Drawing::Size(1918, 1030);
				this->Name = L"Quiz2";
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				this->Load += gcnew System::EventHandler(this, &Quiz2::Quiz2_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		private: System::Void ShowButton() {
			button1->Show();
			button2->Show();
			button3->Show();
			button4->Show();
		}
		private: System::Void TextBlack() {
			button1->ForeColor = System::Drawing::Color::Black;
			button2->ForeColor = System::Drawing::Color::Black;
			button3->ForeColor = System::Drawing::Color::Black;
			button4->ForeColor = System::Drawing::Color::Black;
		}
		private: System::Void Answer(int questionNumber) {
			switch (questionNumber) {
			case 12:
				label2->Text = L"1.哥哥 / 2.医生 / 3.我 / 4.的 / 5.。/ 6.是 \n我 的 哥哥 是 医生。";
				break;
			case 13:
				label2->Text = L"1.我 / 2.汉语 / 3.。/ 4.学 \n他 是 我 的 老师。";
				break;
			case 14:
				label2->Text = L"1.我 / 2.汉语 / 3.。/ 4.学 \n我 学 汉语。";
				break;
			}
		}
		private: System::Void Changcolor() { //Text CorrectAnwer to Green
			switch (correctAnswer) {
			case 1:
				button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				break;
			case 2:
				button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				break;
			case 3:
				button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				break;
			case 4:
				button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				break;
			}
		}

		private: System::Void Quiz2_Load(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void askquestion(int qnum) {
			switch (qnum) {
			case 1:
				label2->Text = L"gēge\n哥哥";
				button1->Text = "แม่";
				button2->Text = "พ่อ";
				button3->Text = "พี่ชาย";
				button4->Text = "พี่สาว";

				correctAnswer = 3;
				ShowButton();
				button6->Hide();
				button7->Hide();
				textBox1->Hide();
				break;
			case 2:
				label2->Text = L"māmā\n妈妈";
				button1->Text = "พ่อ";
				button2->Text = "แม่";
				button3->Text = "พี่สาว";
				button4->Text = "พี่ชาย";

				correctAnswer = 2;
				button6->Show();
				break;
			case 3:
				label2->Text = L"dìdi\n弟弟";
				button1->Text = "พี่สาว";
				button2->Text = "พี่ชาย";
				button3->Text = "น้องสาว";
				button4->Text = "น้องชาย";

				correctAnswer = 4;
				break;
			case 4:
				label2->Text = L"jiějiě\n姐姐";
				button1->Text = "พี่ชาย";
				button2->Text = "พี่สาว";
				button3->Text = "แม่";
				button4->Text = "พ่อ";

				correctAnswer = 2;
				break;
			case 5:
				label2->Text = L"lǎoshī\n老师";
				button1->Text = "หมอ";
				button2->Text = "คุณพยาบาล";
				button3->Text = "คุณครู";
				button4->Text = "พระ";

				correctAnswer = 3;
				break;
			case 6:
				label2->Text = L"xǐ huān\n喜欢";
				button1->Text = "รัก";
				button2->Text = "เกลียด";
				button3->Text = "ชอบ";
				button4->Text = "ไม่ชอบ";

				correctAnswer = 3;
				break;
			case 7:
				label2->Text = L"bàba\n爸爸";
				button1->Text = "น้องชาย";
				button2->Text = "น้องสาว";
				button3->Text = "พ่อ";
				button4->Text = "พี่ชาย";

				correctAnswer = 3;
				break;
			case 8:
				label2->Text = L"xuéshēng\n学生";
				button1->Text = "นักเลง";
				button2->Text = "นักร้อง";
				button3->Text = "นักเรียน";
				button4->Text = "อาจารย์";

				correctAnswer = 3;
				break;
			case 9:
				label2->Text = L"hànyǔ\n汉语";
				button1->Text = "ภาษาจีน";
				button2->Text = "ภาษาไทย";
				button3->Text = "ภาษาเกาหลี";
				button4->Text = "ภาษาญี่ปุ่น";

				correctAnswer = 1;
				break;
			case 10:
				label2->Text = L"tā\n她";
				button1->Text = "เขาผู้ชาย";
				button2->Text = "เขาผู้หญิง";
				button3->Text = "เขาไม่รัก";
				button4->Text = "เขาใหญ่";

				correctAnswer = 1;
				ShowButton();
				label2->Size = System::Drawing::Size(891, 286);
				label2->Location = System::Drawing::Point(515, 250);
				label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 72));

				break;
			case 11:
				button1->Hide();
				button2->Hide();
				button3->Hide();
				button4->Hide();
				button7->Hide();
				textBox1->Hide();
				label2->Text = L"STEP 2\nจงเรียงประโยคให้ถูกต้อง";
				label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 56, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				label2->Size = System::Drawing::Size(1200, 527);
				label2->Location = System::Drawing::Point(365, 250);
				break;
			case 12:
				label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				label2->Text = L"1.哥哥 / 2.医生 / 3.我 / 4.的 / 5.。/ 6.是";
				textBox1->Text = L"";
				correctAnswer = 341625;
				button7->Text = L"CHECK";
				textBox1->Show();
				button7->Show();
				break;
			case 13:
				label2->Text = L"1.。/ 2.是 / 3.我 / 4.他 / 5.的 / 6.老师";
				textBox1->Text = L"";
				correctAnswer = 423561;
				textBox1->Show();
				button7->Show();
				break;
			case 14:
				label2->Text = L"1.我 / 2.汉语 / 3.。/ 4.学";
				textBox1->Text = L"";
				textBox1->Show();
				correctAnswer = 1423;
				textBox1->Show();
				button7->Show();
				break;
			case 15:
				label2->Text = L"Your Score\n" + score + "/13";
				button7->Text = L"TRY AGAIN";
				textBox1->Hide();
				button6->Hide();
				button7->Show();
				break;
			}
		}
		public:bool switchToformHQ2 = false;
			  //NEXT
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			if (questionNumber <= totalQuestion) {
				questionNumber++;
				askquestion(questionNumber);
				if (questionNumber < totalQuestion + 1) {
					// Reset button colors
					TextBlack();
					if (userAnswers[questionNumber - 1] == correctAnswer) {
						// Next answer was correct
						Changcolor();
					}
					else {
						// Next answer was wrong
						Button^ selectedButton = nullptr;
						switch (userAnswers[questionNumber - 1]) {
						case 1:
							selectedButton = button1;
							break;
						case 2:
							selectedButton = button2;
							break;
						case 3:
							selectedButton = button3;
							break;
						case 4:
							selectedButton = button4;
							break;
						}
						if (selectedButton != nullptr) {
							selectedButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
								static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
							Changcolor();
						}
					}
				}
			}
			else {
				questionNumber = 1;
				score = 0;
				Array::Clear(userAnswers, 0, userAnswers->Length);
				TextBlack();
				askquestion(questionNumber);
				button1->Show();
				button2->Show();
				button3->Show();
				button4->Show();

				this->Close();
				switchToformHQ2 = true;
			}
		}
			   //PREVIOUS
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			if (questionNumber > 1) {
				questionNumber--;
				askquestion(questionNumber);
				if (userAnswers[questionNumber - 1] != 0) {
					// Reset button colors
					TextBlack();
					if (userAnswers[questionNumber - 1] == correctAnswer) {
						// Previous answer was correct
						Changcolor();
					}
					else {
						// Previous answer was wrong
						Button^ selectedButton = nullptr;
						switch (userAnswers[questionNumber - 1]) {
						case 1:
							selectedButton = button1;
							break;
						case 2:
							selectedButton = button2;
							break;
						case 3:
							selectedButton = button3;
							break;
						case 4:
							selectedButton = button4;
							break;
						}
						if (selectedButton != nullptr) {
							selectedButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
								static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
						}
						// Highlight the correct answer in green
						Changcolor();
					}
				}
			}
		}
			   //TRY AGAIN
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			if (questionNumber == 15) {
				questionNumber = 1;
				score = 0;
				Array::Clear(userAnswers, 0, userAnswers->Length);
				TextBlack();
				askquestion(questionNumber);
				label2->Size = System::Drawing::Size(891, 286);
				label2->Location = System::Drawing::Point(515, 250);
				label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 72));
			}
			else {
				try {
					int CheckAnswer = System::Convert::ToInt32(textBox1->Text);
					if (CheckAnswer == correctAnswer) {
						MessageBox::Show("Correct!", "Answer", MessageBoxButtons::OK, MessageBoxIcon::None);
						score++;
						Answer(questionNumber);
						textBox1->Hide();
						button7->Hide();
					}
					else {
						MessageBox::Show("Incorrect!", "Answer", MessageBoxButtons::OK, MessageBoxIcon::None);
						Answer(questionNumber);
						textBox1->Hide();
						button7->Hide();
					}
				}
				catch (FormatException^) {
					MessageBox::Show("Please enter a valid number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				catch (OverflowException^) {
					MessageBox::Show("Entered number is too large or too small.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		private: System::Void checkAnswerEvent(System::Object^ sender, System::EventArgs^ e) {
			Button^ selectedButton = dynamic_cast<Button^>(sender);
			int buttonTag = Convert::ToInt32(selectedButton->Tag);
			userAnswers[questionNumber - 1] = buttonTag;
			//แสดงคำตอบที่ตอบถูกเป็นสีเขียว
			if (buttonTag == correctAnswer)
			{
				selectedButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));;
				score++;
			}
			//แสดงคำตอบที่ตอบผิดเป็นสีแดง
			else
			{
				selectedButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));

				//สำหรับแสดงคำตอบที่ถูกเมื่อตอบผิด
				switch (correctAnswer) {
				case 1:
					button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
					break;
				case 2:
					button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
					break;
				case 3:
					button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
					break;
				case 4:
					button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
					break;
				}
			}
		}

		};
	}
