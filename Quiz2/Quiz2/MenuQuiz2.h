#pragma once

namespace Quiz2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuQuiz2
	/// </summary>
	public ref class MenuQuiz2 : public System::Windows::Forms::Form
	{
	public:
		MenuQuiz2(void)
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
		~MenuQuiz2()
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
	private: System::Windows::Forms::Button^ GoQuiz2;
	private: System::Windows::Forms::Button^ Golesson3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuQuiz2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->GoQuiz2 = (gcnew System::Windows::Forms::Button());
			this->Golesson3 = (gcnew System::Windows::Forms::Button());
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
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(300, 130);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
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
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
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
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(511, 487);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// GoQuiz2
			// 
			this->GoQuiz2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GoQuiz2->BackColor = System::Drawing::Color::White;
			this->GoQuiz2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GoQuiz2.BackgroundImage")));
			this->GoQuiz2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->GoQuiz2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->GoQuiz2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->GoQuiz2->FlatAppearance->BorderSize = 0;
			this->GoQuiz2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->GoQuiz2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->GoQuiz2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GoQuiz2->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GoQuiz2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->GoQuiz2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->GoQuiz2->Location = System::Drawing::Point(637, 294);
			this->GoQuiz2->Margin = System::Windows::Forms::Padding(2);
			this->GoQuiz2->Name = L"GoQuiz2";
			this->GoQuiz2->Size = System::Drawing::Size(629, 168);
			this->GoQuiz2->TabIndex = 4;
			this->GoQuiz2->Text = L"Quiz 2";
			this->GoQuiz2->UseVisualStyleBackColor = false;
			this->GoQuiz2->Click += gcnew System::EventHandler(this, &MenuQuiz2::GoQuiz2_Click_1);
			// 
			// Golesson3
			// 
			this->Golesson3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Golesson3->BackColor = System::Drawing::Color::White;
			this->Golesson3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Golesson3.BackgroundImage")));
			this->Golesson3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Golesson3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Golesson3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Golesson3->FlatAppearance->BorderSize = 0;
			this->Golesson3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Golesson3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->Golesson3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Golesson3->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Golesson3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->Golesson3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Golesson3->Location = System::Drawing::Point(637, 568);
			this->Golesson3->Margin = System::Windows::Forms::Padding(2);
			this->Golesson3->Name = L"Golesson3";
			this->Golesson3->Size = System::Drawing::Size(629, 168);
			this->Golesson3->TabIndex = 5;
			this->Golesson3->Text = L"Lesson 3 : Where";
			this->Golesson3->UseVisualStyleBackColor = false;
			// 
			// MenuQuiz2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1904, 1039);
			this->Controls->Add(this->Golesson3);
			this->Controls->Add(this->GoQuiz2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Location = System::Drawing::Point(1920, 1080);
			this->MaximumSize = System::Drawing::Size(1920, 1078);
			this->MinimumSize = System::Drawing::Size(1918, 1038);
			this->Name = L"MenuQuiz2";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MenuQuiz2::MenuQuiz2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		public: bool switchToQ2 = false;
private: System::Void MenuQuiz2_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GoQuiz2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	switchToQ2 = true;
}
};
}
