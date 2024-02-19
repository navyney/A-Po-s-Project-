#pragma once

namespace CONVER1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ConL1
	/// </summary>
	public ref class ConL1 : public System::Windows::Forms::Form
	{
	public:
		ConL1(void)
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
		~ConL1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConL1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1878, 920);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->radioButton6);
			this->panel2->Controls->Add(this->radioButton5);
			this->panel2->Controls->Add(this->radioButton4);
			this->panel2->Controls->Add(this->radioButton2);
			this->panel2->Controls->Add(this->radioButton1);
			this->panel2->Controls->Add(this->radioButton3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(340, 152);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1200, 745);
			this->panel2->TabIndex = 60;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(335, 455);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(540, 250);
			this->pictureBox1->TabIndex = 72;
			this->pictureBox1->TabStop = false;
			// 
			// radioButton6
			// 
			this->radioButton6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton6->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton6.BackgroundImage")));
			this->radioButton6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton6->Location = System::Drawing::Point(890, 345);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(36, 36);
			this->radioButton6->TabIndex = 71;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"\r\n";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton5->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton5.BackgroundImage")));
			this->radioButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton5->Location = System::Drawing::Point(890, 280);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(36, 36);
			this->radioButton5->TabIndex = 68;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"\r\n";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton4->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton4.BackgroundImage")));
			this->radioButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton4->Location = System::Drawing::Point(1080, 220);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(36, 36);
			this->radioButton4->TabIndex = 70;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"\r\n";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton2->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton2.BackgroundImage")));
			this->radioButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton2->Location = System::Drawing::Point(1080, 150);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(36, 36);
			this->radioButton2->TabIndex = 69;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"\r\n";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton1->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton1.BackgroundImage")));
			this->radioButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton1->Location = System::Drawing::Point(905, 90);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(36, 36);
			this->radioButton1->TabIndex = 68;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"\r\n";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton3->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton3.BackgroundImage")));
			this->radioButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton3->Location = System::Drawing::Point(905, 25);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(36, 36);
			this->radioButton3->TabIndex = 67;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"\r\n";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label4->Location = System::Drawing::Point(800, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(315, 360);
			this->label4->TabIndex = 2;
			this->label4->Text = L"hello\r\n\r\nhello     \r\n\r\nWhat is your name  \r\n\r\nmy name is  A Po    \r\n\r\nbye     \r\n\r"
				L"\nbye   ";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label3->Location = System::Drawing::Point(425, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(315, 360);
			this->label3->TabIndex = 1;
			this->label3->Text = L"nǐhǎo     \r\n\r\nnǐhǎo     \r\n\r\nnǐjiàoshénmemíngzì     \r\n\r\nwǒjiào     \r\n\r\nzàijiàn    "
				L" \r\n\r\nzàijiàn     ";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label2->Location = System::Drawing::Point(75, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 360);
			this->label2->TabIndex = 0;
			this->label2->Text = L"A: 你好!  \r\n\r\nB: 你好! \r\n\r\nA: 你叫什么名字\?  \r\n\r\nB: 我叫阿波。  \r\n\r\nA: 再见。\r\n\r\nB: 再见。\r\n";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(40, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(745, 70);
			this->label1->TabIndex = 59;
			this->label1->Text = L"Lesson 0 : Conversation\r\n\r\n";
			// 
			// progressBar1
			// 
			this->progressBar1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->progressBar1->Location = System::Drawing::Point(500, 975);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(900, 20);
			this->progressBar1->TabIndex = 104;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->button2->Location = System::Drawing::Point(12, 946);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 75);
			this->button2->TabIndex = 103;
			this->button2->Text = L"Previous";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->button1->Location = System::Drawing::Point(1690, 946);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 75);
			this->button1->TabIndex = 105;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// ConL1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Name = L"ConL1";
			this->Text = L"ConL1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
