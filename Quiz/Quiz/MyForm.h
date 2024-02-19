﻿#pragma once
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
	private: System::Windows::Forms::Button^ button2;
		   int totalQuestion = 5;

	public:
		MyForm(void)
		{
			InitializeComponent();

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ lblQuestion;

	private: System::Windows::Forms::Label^ label2;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->lblQuestion = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1904, 100);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(882, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 58);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Quiz0";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->lblQuestion);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 100);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1904, 941);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(85, 779);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(300, 100);
			this->button2->TabIndex = 6;
			this->button2->Text = L"PREVIOUS";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->button1->Location = System::Drawing::Point(1525, 779);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(300, 100);
			this->button1->TabIndex = 5;
			this->button1->Tag = L"5";
			this->button1->Text = L"NEXT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->radioButton4->Location = System::Drawing::Point(21, 152);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(102, 28);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Tag = L"4";
			this->radioButton4->Text = L"Answer4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->Click += gcnew System::EventHandler(this, &MyForm::checkAnswerEvent);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->radioButton3->Location = System::Drawing::Point(21, 118);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(102, 28);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Tag = L"3";
			this->radioButton3->Text = L"Answer3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->Click += gcnew System::EventHandler(this, &MyForm::checkAnswerEvent);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->radioButton2->Location = System::Drawing::Point(21, 84);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(102, 28);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Tag = L"2";
			this->radioButton2->Text = L"Answer2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Click += gcnew System::EventHandler(this, &MyForm::checkAnswerEvent);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->radioButton1->Location = System::Drawing::Point(21, 50);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(102, 28);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Tag = L"1";
			this->radioButton1->Text = L"Answer1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Click += gcnew System::EventHandler(this, &MyForm::checkAnswerEvent);
			// 
			// lblQuestion
			// 
			this->lblQuestion->AutoSize = true;
			this->lblQuestion->Font = (gcnew System::Drawing::Font(L"Kanit", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->lblQuestion->Location = System::Drawing::Point(15, 16);
			this->lblQuestion->Name = L"lblQuestion";
			this->lblQuestion->Size = System::Drawing::Size(100, 31);
			this->lblQuestion->TabIndex = 0;
			this->lblQuestion->Text = L"Question";
			this->lblQuestion->Click += gcnew System::EventHandler(this, &MyForm::checkAnswerEvent);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1038);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Questionnumber < totalQuestion) {
			Questionnumber++;
			askQuestion(Questionnumber);
		}
		else {
			Percentage = (int)round((double)(Score * 100 / totalQuestion));;
			MessageBox::Show(
				"Quiz Ended! " + "\n" +
				"You have answered " + Score + " Question Correctly." + "\n" +
				"Your total percentage is " + Percentage + "%" + "\n" +
				"Click OK to do again");

			/*/Score = 0;
			Questionnumber = 1;
			askQuestion(Questionnumber);*/
		}
		//MyForm1^ obj = gcnew MyForm1;
		//obj -> ShowDialog();
		//Form::Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Questionnumber > 1) {
			Questionnumber--;
			askQuestion(Questionnumber);
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void checkAnswerEvent(System::Object^ sender, System::EventArgs^ e) {
		RadioButton^ selectedRadioButton = dynamic_cast<RadioButton^>(sender);
		int RadiobuttonTag = Convert::ToInt32(selectedRadioButton->Tag);
		if (RadiobuttonTag == CorrectAnswer)
		{
			Score++;
		}
	}
	private: System::Void askQuestion(int qnum) {
		switch (qnum) {
		case 1:
			lblQuestion->Text = "1.“b” พยัญชนะต่อไปนี้อ่านออกเสียงอย่างไร";
			radioButton1->Text = "บัว";
			radioButton2->Text = "ปัว";
			radioButton3->Text = "พัว";
			radioButton4->Text = "เบอะ";
			button1->Text = "Next";

			CorrectAnswer = 2;

			break;
		case 2:
			lblQuestion->Text = "2.พยัญชนะกลุ่มใดสามารถผสมกับสระ ü ได้ทั้งหมด";
			radioButton1->Text = "1.b p m f ";
			radioButton2->Text = "2.d t n l";
			radioButton3->Text = "3.g k h";
			radioButton4->Text = "4.j q x y ";
			button1->Text = "Next";

			CorrectAnswer = 4;

			break;
		case 3:
			lblQuestion->Text = "3. “hǎo” คำต่อไปนี้อ่านออกเสียงอย่างไร";
			radioButton1->Text = "1.ฮาว";
			radioButton2->Text = "2.ห้าว";
			radioButton3->Text = "3.ห่าว";
			radioButton4->Text = "4.หาว";
			button1->Text = "Next";

			CorrectAnswer = 3;

			break;
		case 4:
			lblQuestion->Text = "4.“xióng” คำต่อไปนี้อ่านออกเสียงอย่างไร";
			radioButton1->Text = "1.สง";
			radioButton2->Text = "2.ชง";
			radioButton3->Text = "3.ซง";
			radioButton4->Text = "4.เซียง";
			button1->Text = "Next";

			CorrectAnswer = 1;

			break;
		case 5:
			lblQuestion->Text = "5. tian ข้อใดสะกดได้ถูกต้อง ";
			radioButton1->Text = "1.ตัว + อาน = ตาน";
			radioButton2->Text = "2.ทัว + อาน = ทาน";
			radioButton3->Text = "3.เตอ + เอียน = เตียน";
			radioButton4->Text = "4.เทอ + เอียน = เทียน";
			button1->Text = "Submit";

			CorrectAnswer = 4;

			break;

		}
	}
	};
}