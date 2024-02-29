#pragma once

namespace QuizThree {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for QTh
	/// </summary>
	public ref class QTh : public System::Windows::Forms::Form
	{
		int correctAnswer;
		int questionNumber = 1;
		int score = 0;
		int totalQuestion = 13 + 1;
		String^ msg;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button7;


	private: array<int>^ userAnswers;
	public:
		QTh(void)
		{
			InitializeComponent();
			userAnswers = gcnew array<int>(totalQuestion);
			askquestion(questionNumber);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~QTh()
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
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(870, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 39);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Lesson3";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 47.99999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(840, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 73);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Quiz3";
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(28, 139);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1847, 778);
			this->panel1->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Location = System::Drawing::Point(777, 438);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(300, 100);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1002, 688);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(540, 65);
			this->button4->TabIndex = 4;
			this->button4->Tag = L"4";
			this->button4->Text = L"Ans4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(302, 688);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(540, 65);
			this->button3->TabIndex = 3;
			this->button3->Tag = L"3";
			this->button3->Text = L"Ans3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1002, 586);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(540, 65);
			this->button2->TabIndex = 2;
			this->button2->Tag = L"2";
			this->button2->Text = L"Ans2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(302, 586);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(540, 65);
			this->button1->TabIndex = 1;
			this->button1->Tag = L"1";
			this->button1->Text = L"Ans1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(420, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1013, 548);
			this->label2->TabIndex = 5;
			this->label2->Text = L"QUESTION";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button5->Location = System::Drawing::Point(1545, 940);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(330, 90);
			this->button5->TabIndex = 8;
			this->button5->Text = L"N";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &QTh::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button6->Location = System::Drawing::Point(28, 939);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(330, 90);
			this->button6->TabIndex = 9;
			this->button6->Text = L"P";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &QTh::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button7->Location = System::Drawing::Point(790, 939);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(330, 90);
			this->button7->TabIndex = 10;
			this->button7->Text = L"T";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &QTh::button7_Click);
			// 
			// QTh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"QTh";
			this->Text = L"QTh";
			this->Load += gcnew System::EventHandler(this, &QTh::QTh_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
			label2->Text = L"1.?? / 2.?? / 3.? / 4.? / 5.?/ 6.? \n? ? ?? ? ???";
			break;
		case 13:
			label2->Text = L"1.? / 2.?? / 3.?/ 4.? \n? ? ? ? ???";
			break;
		case 14:
			label2->Text = L"1.? / 2.?? / 3.?/ 4.? \n? ? ???";
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
	private: System::Void askquestion(int qnum) {
		switch (qnum) {
		case 1:
			label2->Text = L"g?ge\n??";
			button1->Text = "แม่";
			button2->Text = "พ่อ";
			button3->Text = "พี่ชาย";
			button4->Text = "พี่สาว";

			correctAnswer = 3;
			button5->Text = L" Next";
			ShowButton();
			panel1->Show();
			button6->Hide();
			button7->Hide();
			textBox1->Hide();
			break;
		case 2:
			label2->Text = L"m?m?\n??";
			button1->Text = "พ่อ";
			button2->Text = "แม่";
			button3->Text = "พี่สาว";
			button4->Text = "พี่ชาย";

			correctAnswer = 2;
			button6->Show();
			break;
		case 3:
			label2->Text = L"d?di\n??";
			button1->Text = "พี่สาว";
			button2->Text = "พี่ชาย";
			button3->Text = "น้องสาว";
			button4->Text = "น้องสาว";

			correctAnswer = 4;
			break;
		case 4:
			label2->Text = L"ji?ji?\n??";
			button1->Text = "พี่ชาย";
			button2->Text = "พี่สาว";
			button3->Text = "แม่";
			button4->Text = "พ่อ";

			correctAnswer = 2;
			break;
		case 5:
			label2->Text = L"l?osh?\n??";
			button1->Text = "หมอ";
			button2->Text = "คุพยาบาล";
			button3->Text = "คุณครู";
			button4->Text = "พระ";

			correctAnswer = 3;
			break;
		case 6:
			label2->Text = L"x? hu?n\n??";
			button1->Text = "รัก";
			button2->Text = "เกลียด";
			button3->Text = "ชอบ";
			button4->Text = "ไม่ชอบ";

			correctAnswer = 3;
			break;
		case 7:
			label2->Text = L"b?ba\n??";
			button1->Text = "น้องชาย";
			button2->Text = "น้องสาว";
			button3->Text = "พ่อ";
			button4->Text = "พี่ชาย";

			correctAnswer = 3;
			break;
		case 8:
			label2->Text = L"xu?sh?ng\n??";
			button1->Text = "นักเลง";
			button2->Text = "นักร้อง";
			button3->Text = "นักเรียน";
			button4->Text = "อาจารย์";

			correctAnswer = 3;
			break;
		case 9:
			label2->Text = L"h?ny?\n??";
			button1->Text = "ภาษาจีน";
			button2->Text = "ภาษาไทย";
			button3->Text = "ภาษาเกาหลี";
			button4->Text = "ภาษาญี่ปุ่น";

			correctAnswer = 1;
			break;
		case 10:
			label2->Text = L"t?\n?";
			button1->Text = "เขาผู้ชาย";
			button2->Text = "เขาผู้หญิง";
			button3->Text = "เขาไม่รัก";
			button4->Text = "เขาใหญ่";

			correctAnswer = 1;
			ShowButton();
			label2->Size = System::Drawing::Size(901, 527);
			label2->Location = System::Drawing::Point(427, 40);
			break;
		case 11:
			button1->Hide();
			button2->Hide();
			button3->Hide();
			button4->Hide();
			button7->Hide();
			textBox1->Hide();
			label2->Text = L"Step2\nจงเรียงประโยคให้ถูกต้อง";
			label2->Font = (gcnew System::Drawing::Font(L"Kanit", 56, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Size = System::Drawing::Size(1300, 527);
			label2->Location = System::Drawing::Point(240, 40);
			break;
		case 12:
			label2->Font = (gcnew System::Drawing::Font(L"Kanit", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Text = L"1.?? / 2.?? / 3.? / 4.? / 5.?/ 6.?";
			textBox1->Text = L"";
			correctAnswer = 341625;
			button7->Text = L"Check";
			button7->Show();
			textBox1->Show();
			break;
		case 13:
			label2->Text = L"1.?/ 2.? / 3.? / 4.? / 5.? / 6.??";
			textBox1->Text = L"";

			correctAnswer = 423561;
			button5->Text = L"Next";
			textBox1->Show();
			button7->Show();
			button5->Size = System::Drawing::Size(330, 90);
			break;
		case 14:
			label2->Text = L"1.? / 2.?? / 3.?/ 4.?";
			textBox1->Text = L"";

			correctAnswer = 1423;
			textBox1->Show();
			button7->Show();
			button5->Text = L"Submit";
			button5->Size = System::Drawing::Size(330, 90);
			break;
		case 15:
			label2->Text = L"Your Score\n" + score + "/15";
			button7->Text = L"Try Again";
			button5->Text = L"Next";
			textBox1->Hide();
			button6->Hide();
			button7->Show();
			break;
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
			MessageBox::Show("Correct!", "Answer", MessageBoxButtons::OK, MessageBoxIcon::None);
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
				MessageBox::Show("InCorrect" + "\n\n" + "CorrectAnswer is " + button1->Text, "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			case 2:
				button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				MessageBox::Show("InCorrect" + "\n\n" + "CorrectAnswer is " + button2->Text, "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			case 3:
				button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				MessageBox::Show("InCorrect" + "\n\n" + "CorrectAnswer is " + button3->Text, "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			case 4:
				button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				MessageBox::Show("InCorrect" + "\n\n" + "CorrectAnswer is " + button4->Text, "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}
		}
	}
	private: System::Void QTh_Load(System::Object^ sender, System::EventArgs^ e) {
	}
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
	}
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
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (questionNumber == 15) {
			questionNumber = 1;
			score = 0;
			Array::Clear(userAnswers, 0, userAnswers->Length);
			TextBlack();
			button5->Location = System::Drawing::Point(1541, 939);
			button5->Size = System::Drawing::Size(330, 90);
			askquestion(questionNumber);
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
};
};


