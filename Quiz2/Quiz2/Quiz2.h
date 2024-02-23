#pragma once

namespace Quiz2 {

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
		int totalQuestion = 13;
		String^ msg;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

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
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());

			this->panel1->SuspendLayout();
			this->SuspendLayout();

			// label1

			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Minecraft", 47.99999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(803, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 77);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Quiz2";

			// panel1

			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Minecraft", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(28, 139);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1843, 778);
			this->panel1->TabIndex = 1;

			// label2

			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->Font = (gcnew System::Drawing::Font(L"Kanit", 71.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(427, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(901, 527);
			this->label2->TabIndex = 5;
			this->label2->Text = L"QUESTION";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			// button4

			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(955, 688);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(556, 71);
			this->button4->TabIndex = 4;
			this->button4->Tag = L"4";
			this->button4->Text = L"Ans4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Quiz2::checkAnswerEvent);

			// button3

			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(273, 688);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(556, 71);
			this->button3->TabIndex = 3;
			this->button3->Tag = L"3";
			this->button3->Text = L"Ans3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Quiz2::checkAnswerEvent);

			// button2

			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(955, 586);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(556, 71);
			this->button2->TabIndex = 2;
			this->button2->Tag = L"2";
			this->button2->Text = L"Ans2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Quiz2::checkAnswerEvent);

			// button1

			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(273, 586);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(556, 71);
			this->button1->TabIndex = 1;
			this->button1->Tag = L"1";
			this->button1->Text = L"Ans1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Quiz2::checkAnswerEvent);

			// button5

			this->button5->Font = (gcnew System::Drawing::Font(L"Minecraft", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1541, 939);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(330, 90);
			this->button5->TabIndex = 2;
			this->button5->Text = L" Next";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Quiz2::button5_Click);

			// button6

			this->button6->Font = (gcnew System::Drawing::Font(L"Minecraft", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(28, 939);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(330, 90);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Previous";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Quiz2::button6_Click);

			// label3

			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Minecraft", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(838, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 42);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Lesson2";

			// button7

			this->button7->Font = (gcnew System::Drawing::Font(L"Minecraft", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(709, 939);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(396, 90);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Try Agian";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Quiz2::button7_Click);
			// 
			// Quiz2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1038);
			this->Name = L"Quiz2";
			this->Load += gcnew System::EventHandler(this, &Quiz2::Quiz2_Load);
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TextBlack() {
		button1->ForeColor = System::Drawing::Color::Black;
		button2->ForeColor = System::Drawing::Color::Black;
		button3->ForeColor = System::Drawing::Color::Black;
		button4->ForeColor = System::Drawing::Color::Black;
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
			button5->Text = L" Next";
			panel1->Show();
			button6->Hide();
			button7->Hide();
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
			button4->Text = "น้องสาว";

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
			button2->Text = "คุพยาบาล";
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
			button5->Text = L" Next";
			button5->Location = System::Drawing::Point(1541, 939);
			button5->Size = System::Drawing::Size(330, 90);
			break;
		case 10:
			label2->Text = L"tā\n她";
			button1->Text = "เขาผู้ชาย";
			button2->Text = "เขาผู้หญิง";
			button3->Text = "เขาไม่รัก";
			button4->Text = "เขาใหญ่";

			correctAnswer = 1;
			
			button5->Location = System::Drawing::Point(1271, 939);
			button5->Size = System::Drawing::Size(600, 90);
			break;
		case 11:
			button1->Hide();
			button2->Hide();
			button3->Hide();
			button4->Hide();
			label2->Text = L"Step2";
			break;
		}
	}
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
			if (questionNumber > totalQuestion) {
				MessageBox::Show("Total Score: " + score.ToString() + "/" + totalQuestion, "Quiz Completed");
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
					}}}}
	//TRY AGAIN
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		questionNumber = 1;
		score = 0;
		Array::Clear(userAnswers, 0, userAnswers->Length);
		TextBlack();
		button5->Location = System::Drawing::Point(1541, 939);
		button5->Size = System::Drawing::Size(330, 90);
		askquestion(questionNumber);
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
			//MessageBox::Show("Correct!" , "Answer", MessageBoxButtons::OK, MessageBoxIcon::None);
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
				//MessageBox::Show("InCorrect" + "\n\n" + "CorrectAnswer is " + button1->Text, "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			case 2:
				button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				//MessageBox::Show("InCorrect" + "\n\n" + "CorrectAnswer is " + button2->Text, "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			case 3:
				button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				//MessageBox::Show("InCorrect" + "\n\n" + "CorrectAnswer is " + button3->Text, "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			case 4:
				button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				//MessageBox::Show("InCorrect" + "\n\n" + "CorrectAnswer is " + button4->Text, "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}
		}
	}
	};
	}
