#pragma once
namespace Quizz1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Quiz1 : public System::Windows::Forms::Form
	{
		int correctAnswer;
		int questionNumber = 1;
		int score = 0;
		int totalQuestion = 10;
		String^ msg;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ nextbutton;
	private: System::Windows::Forms::PictureBox^ previousbutton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ decorleft;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lesson3;

	private: array<int>^ userAnswers;
	public:
		Quiz1(void)
		{
			InitializeComponent();
			userAnswers = gcnew array<int>(totalQuestion);
			askquestion(questionNumber);
		}

	protected:
		~Quiz1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Quiz1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->nextbutton = (gcnew System::Windows::Forms::PictureBox());
			this->previousbutton = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->decorleft = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lesson3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(28, 139);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1843, 778);
			this->panel1->TabIndex = 1;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1015, 552);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(556, 71);
			this->button4->TabIndex = 4;
			this->button4->Tag = L"4";
			this->button4->Text = L"Ans4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Quiz1::checkAnswerEvent);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(333, 552);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(556, 71);
			this->button3->TabIndex = 3;
			this->button3->Tag = L"3";
			this->button3->Text = L"Ans3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Quiz1::checkAnswerEvent);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1015, 450);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(556, 71);
			this->button2->TabIndex = 2;
			this->button2->Tag = L"2";
			this->button2->Text = L"Ans2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Quiz1::checkAnswerEvent);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(333, 450);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(556, 71);
			this->button1->TabIndex = 1;
			this->button1->Tag = L"1";
			this->button1->Text = L"Ans1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Quiz1::checkAnswerEvent);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(493, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(901, 527);
			this->label2->TabIndex = 5;
			this->label2->Text = L"\r\n我 \r\nwǒ\r\n";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1541, 939);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(330, 90);
			this->button5->TabIndex = 2;
			this->button5->Text = L" Next";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(28, 939);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(330, 90);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Previous";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 47.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(709, 939);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(396, 90);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Try Agian";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Quiz1::button7_Click);
			// 
			// nextbutton
			// 
			this->nextbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextbutton.BackgroundImage")));
			this->nextbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nextbutton->Location = System::Drawing::Point(1584, 897);
			this->nextbutton->Name = L"nextbutton";
			this->nextbutton->Size = System::Drawing::Size(282, 133);
			this->nextbutton->TabIndex = 61;
			this->nextbutton->TabStop = false;
			this->nextbutton->Click += gcnew System::EventHandler(this, &Quiz1::nextbutton_Click);
			// 
			// previousbutton
			// 
			this->previousbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousbutton.BackgroundImage")));
			this->previousbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->previousbutton->Location = System::Drawing::Point(33, 897);
			this->previousbutton->Name = L"previousbutton";
			this->previousbutton->Size = System::Drawing::Size(300, 130);
			this->previousbutton->TabIndex = 60;
			this->previousbutton->TabStop = false;
			this->previousbutton->Click += gcnew System::EventHandler(this, &Quiz1::previousbutton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(1442, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(450, 450);
			this->pictureBox1->TabIndex = 59;
			this->pictureBox1->TabStop = false;
			// 
			// decorleft
			// 
			this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
			this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->decorleft->Location = System::Drawing::Point(12, 13);
			this->decorleft->Name = L"decorleft";
			this->decorleft->Size = System::Drawing::Size(450, 450);
			this->decorleft->TabIndex = 58;
			this->decorleft->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label1->Location = System::Drawing::Point(765, 160);
			this->label1->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(387, 82);
			this->label1->TabIndex = 56;
			this->label1->Text = L"Consonants";
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
			this->lesson3->TabIndex = 55;
			this->lesson3->Text = L"Lesson 0 : pinyin";
			// 
			// Quiz1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->nextbutton);
			this->Controls->Add(this->previousbutton);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->decorleft);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lesson3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1030);
			this->Name = L"Quiz1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Quiz1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
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
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	// Next!
	/*private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (questionNumber <= totalQuestion) {
			questionNumber++;
			askquestion(questionNumber);
			if (questionNumber < totalQuestion + 1) {
				// Reset button colors
				button1->ForeColor = System::Drawing::Color::Black;
				button2->ForeColor = System::Drawing::Color::Black;
				button3->ForeColor = System::Drawing::Color::Black;
				button4->ForeColor = System::Drawing::Color::Black;
				if (userAnswers[questionNumber - 1] == correctAnswer) {
					// Next answer was correct
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
			}
			if (questionNumber > totalQuestion) {
				MessageBox::Show("Total Score: " + score.ToString() + "/" + totalQuestion, "Quiz Completed");
			}
		}
	}
	//Previous
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (questionNumber > 1) {
			questionNumber--;
			askquestion(questionNumber);
			if (userAnswers[questionNumber - 1] != 0) {
				// Reset button colors
				button1->ForeColor = System::Drawing::Color::Black;
				button2->ForeColor = System::Drawing::Color::Black;
				button3->ForeColor = System::Drawing::Color::Black;
				button4->ForeColor = System::Drawing::Color::Black;
				if (userAnswers[questionNumber - 1] == correctAnswer) {
					// Previous answer was correct
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
		}
}*/

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
	
	private: System::Void askquestion(int qnum) {
		switch (qnum) {
		case 1 :
			label2->Text = L"wǒ\n我";
			button1->Text = "คุณ";
			button2->Text = "ฉัน";
			button3->Text = "พวกเรา";
			button4->Text = "พวกคุณ";

			correctAnswer = 2;
			button5->Text = L" Next";
			panel1->Show();
			button6->Hide();
			button7->Hide();
			break;
		case 2:
			label2->Text = L"hǎo\n好";
			button1->Text = "ดี";
			button2->Text = "แย่";
			button3->Text = "ยาก";
			button4->Text = "เสีย";

			correctAnswer = 1;
			break;
		case 3:
			label2->Text = L"dà\n大";
			button1->Text = "อ้วน";
			button2->Text = "ผอม";
			button3->Text = "ใหญ่";
			button4->Text = "เล็ก";

			correctAnswer = 3;
			break;
		case 4:
			label2->Text = L"zàijiàn\n再见";
			button1->Text = "เป็น";
			button2->Text = "ถูกต้อง";
			button3->Text = "สวัสดี";
			button4->Text = "ลาก่อน";

			correctAnswer = 4;
			break;
		case 5:
			label2->Text = L"nǐ\n你";
			button1->Text = "ฉัน";
			button2->Text = "คุณ";
			button3->Text = "ทำ";
			button4->Text = "ไม่";

			correctAnswer = 2;
			break;
		case 6:
			label2->Text = L"bù\n不";
			button1->Text = "ไม่";
			button2->Text = "ใช่";
			button3->Text = "หรือ	";
			button4->Text = "เป็น";

			correctAnswer = 1;
			break;
		case 7:
			label2->Text = L"zuò\n做";
			button1->Text = "ยาก";
			button2->Text = "มาก";
			button3->Text = "เรียกว่า";
			button4->Text = "ทำ";

			correctAnswer = 4;
			break;
		case 8:
			label2->Text = L"shì\n是";
			button1->Text = "เป็น";
			button2->Text = "ไม่";
			button3->Text = "ใช่";
			button4->Text = "ชอบ";

			correctAnswer = 1;
			break;
		case 9:
			label2->Text = L"shénme\n什么";
			button1->Text = "ใคร";
			button2->Text = "ไหน";
			button3->Text = "อะไร";
			button4->Text = "ทำไม";

			correctAnswer = 3;
			button5->Text = L" Next";
			button5->Location = System::Drawing::Point(1541, 939);
			button5->Size = System::Drawing::Size(330, 90);
			break;
		case 10:
			label2->Text = L"nǐhǎo\n你好";
			button1->Text = "รัก";
			button2->Text = "ลาก่อน";
			button3->Text = "ขอบคุณ";
			button4->Text = "สวัสดี";

			correctAnswer = 4;
			button5->Text = L" Check Score";
			button5->Location = System::Drawing::Point(1271, 939);
			button5->Size = System::Drawing::Size(600, 90);
			break;
		case 11:
			panel1->Hide();
			button5->Text = L" Next Lesson";
			button6->Hide();
			button7->Show();
			break;
		}

	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	questionNumber = 1;
	score = 0;
	Array::Clear(userAnswers, 0, userAnswers->Length);
	TextBlack();
	button5->Location = System::Drawing::Point(1541, 939);
	button5->Size = System::Drawing::Size(330, 90);

	askquestion(questionNumber);
	}
private: System::Void previousbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (questionNumber > 1) {
		questionNumber--;
		askquestion(questionNumber);
		if (questionNumber < totalQuestion + 1) {
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
					// Highlight the correct answer in green
					Changcolor();
				}
			}
		}
	}
}
private: System::Void nextbutton_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}
