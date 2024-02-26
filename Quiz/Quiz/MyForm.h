#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include "MyForm.h"

namespace QUIZZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		int CorrectAnswer;
		int Questionnumber = 1;
		int Score = 0;
		int Percentage;
		int totalQuestion = 5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ decorleft;
	private: System::Windows::Forms::Label^ lesson3;
	private: System::Windows::Forms::PictureBox^ button6;
	private: System::Windows::Forms::PictureBox^ button5;

	private: array<int>^ userAnswers;
	public:
		MyForm(void)
		{
			InitializeComponent();
			userAnswers = gcnew array<int>(totalQuestion);
			askQuestion(Questionnumber);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->decorleft = (gcnew System::Windows::Forms::PictureBox());
			this->lesson3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button5))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1905, 768);
			this->panel2->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1015, 617);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(556, 71);
			this->button4->TabIndex = 4;
			this->button4->Tag = L"4";
			this->button4->Text = L"Ans4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::checkAnswerEvent);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(333, 617);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(556, 71);
			this->button3->TabIndex = 3;
			this->button3->Tag = L"3";
			this->button3->Text = L"Ans3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::checkAnswerEvent);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1015, 515);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(556, 71);
			this->button2->TabIndex = 2;
			this->button2->Tag = L"2";
			this->button2->Text = L"Ans2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::checkAnswerEvent);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(333, 515);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(556, 71);
			this->button1->TabIndex = 1;
			this->button1->Tag = L"1";
			this->button1->Text = L"Ans1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::checkAnswerEvent);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label4->Location = System::Drawing::Point(100, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1703, 527);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Question";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(784, 929);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(300, 100);
			this->button7->TabIndex = 7;
			this->button7->Tag = L"6";
			this->button7->Text = L"Try Again";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(1442, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(450, 450);
			this->pictureBox1->TabIndex = 64;
			this->pictureBox1->TabStop = false;
			// 
			// decorleft
			// 
			this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
			this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->decorleft->Location = System::Drawing::Point(12, 14);
			this->decorleft->Name = L"decorleft";
			this->decorleft->Size = System::Drawing::Size(450, 450);
			this->decorleft->TabIndex = 63;
			this->decorleft->TabStop = false;
			// 
			// lesson3
			// 
			this->lesson3->AutoSize = true;
			this->lesson3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 87.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lesson3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->lesson3->Location = System::Drawing::Point(549, 10);
			this->lesson3->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
			this->lesson3->Name = L"lesson3";
			this->lesson3->Size = System::Drawing::Size(822, 150);
			this->lesson3->TabIndex = 62;
			this->lesson3->Text = L"Quiz Lesson 0";
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(33, 898);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(300, 130);
			this->button6->TabIndex = 65;
			this->button6->TabStop = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(1584, 898);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(282, 133);
			this->button5->TabIndex = 66;
			this->button5->TabStop = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->decorleft);
			this->Controls->Add(this->lesson3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->panel2);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1038);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TextBlack() {
		button1->ForeColor = System::Drawing::Color::Black;
		button2->ForeColor = System::Drawing::Color::Black;
		button3->ForeColor = System::Drawing::Color::Black;
		button4->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void Changcolor() { //Text CorrectAnwer to Green
		switch (CorrectAnswer) {
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


	private: System::Void checkAnswerEvent(System::Object^ sender, System::EventArgs^ e) {
		Button^ selectedButton = dynamic_cast<Button^>(sender);
		int buttonTag = Convert::ToInt32(selectedButton->Tag);
		userAnswers[Questionnumber - 1] = buttonTag;
		//แสดงคำตอบที่ตอบถูกเป็นสีเขียว
		if (buttonTag == CorrectAnswer)
		{
			selectedButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));;
			Score++;
		}
		//แสดงคำตอบที่ตอบผิดเป็นสีแดง
		else
		{
			selectedButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			//สำหรับแสดงคำตอบที่ถูกเมื่อตอบผิด
			Changcolor();
			}
		}
	private: System::Void askQuestion(int qnum) {
		switch (qnum) {
		case 1:
			label4->Text = "1.“b” พยัญชนะต่อไปนี้อ่านออกเสียงอย่างไร";
			button1->Text = "บัว";
			button2->Text = "ปัว";
			button3->Text = "พัว";
			button4->Text = "เบอะ";
			button5->Text = "Next";
			button7->Hide();

			CorrectAnswer = 2;

			break;
		case 2:
			label4->Text = "2.พยัญชนะกลุ่มใดสามารถผสมกับสระ ü ได้ทั้งหมด";
			button1->Text = "1.b p m f ";
			button2->Text = "2.d t n l";
			button3->Text = "3.g k h";
			button4->Text = "4.j q x y ";
			button5->Text = "Next";

			CorrectAnswer = 4;

			break;
		case 3:
			label4->Text = "3. “hǎo” คำต่อไปนี้อ่านออกเสียงอย่างไร";
			button1->Text = "1.ฮาว";
			button2->Text = "2.ห้าว";
			button3->Text = "3.ห่าว";
			button4->Text = "4.หาว";
			button5->Text = "Next";

			CorrectAnswer = 3;

			break;
		case 4:
			label4->Text = "4.“xióng” คำต่อไปนี้อ่านออกเสียงอย่างไร";
			button1->Text = "1.สง";
			button2->Text = "2.ชง";
			button3->Text = "3.ซง";
			button4->Text = "4.เซียง";
			button5->Text = "Next";

			CorrectAnswer = 1;

			break;
		case 5:
			label4->Text = "5. tian ข้อใดสะกดได้ถูกต้อง ";
			button1->Text = "1.ตัว + อาน = ตาน";
			button2->Text = "2.ทัว + อาน = ทาน";
			button3->Text = "3.เตอ + เอียน = เตียน";
			button4->Text = "4.เทอ + เอียน = เทียน";
			button5->Text = "Submit";
			CorrectAnswer = 4;

			break;
		case 6:
			label4->Text = "Your Score\n" + Score + "/5";
			button1->Hide();
			button2->Hide();
			button3->Hide();
			button4->Hide();
			button5->Text = "Next";
			button7->Show();
			button6->Hide();
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Questionnumber <= totalQuestion) {
			Questionnumber++;
			askQuestion(Questionnumber);
			if (Questionnumber < totalQuestion + 1) {
				// Reset button colors
				TextBlack();
				if (userAnswers[Questionnumber - 1] == CorrectAnswer) {
					// Next answer was correct
					Changcolor();
				}
				else {
					// Next answer was wrong
					Button^ selectedButton = nullptr;
					switch (userAnswers[Questionnumber - 1]) {
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
		}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Questionnumber > 1) {
			Questionnumber--;
			askQuestion(Questionnumber);
			if (Questionnumber < totalQuestion + 1) {
				// Reset button colors
				TextBlack();
				if (userAnswers[Questionnumber - 1] == CorrectAnswer) {
					// Previous answer was correct
					Changcolor();
				}
				else {
					// Previous answer was wrong
					Button^ selectedButton = nullptr;
					switch (userAnswers[Questionnumber - 1]) {
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
						// Highlight the correct answer in green
						Changcolor();
					}
				}
			}
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		Questionnumber = 1;
		Score = 0;
		Array::Clear(userAnswers, 0, userAnswers->Length);
		TextBlack();
		button5->Location = System::Drawing::Point(1541, 939);
		button5->Size = System::Drawing::Size(330, 90);
		button1->Show();
		button2->Show();
		button3->Show();
		button4->Show();
		askQuestion(Questionnumber);
	}
};
}