#pragma once
#include <String>
#include "Quiz1.h"
namespace Quizz1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for From_alert
	/// </summary>
	public ref class Form_alert : public System::Windows::Forms::Form
	{
		int X;
		int Y;

	public:
		Form_alert(void)
		{
			InitializeComponent();
		}

	protected:
		~Form_alert()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblMasage;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_alert::typeid));
			this->lblMasage = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblMasage
			// 
			this->lblMasage->AutoSize = true;
			this->lblMasage->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblMasage->Location = System::Drawing::Point(87, 30);
			this->lblMasage->Name = L"lblMasage";
			this->lblMasage->Size = System::Drawing::Size(111, 20);
			this->lblMasage->TabIndex = 0;
			this->lblMasage->Text = L"Massage.Text";
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(281, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 49);
			this->button1->TabIndex = 1;
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_alert::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(45, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form_alert::timer1_Tick);
			// 
			// Form_alert
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(343, 80);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblMasage);
			this->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form_alert";
			this->Text = L"From_alert";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:enum enmAction {
		wait,
		start,
		close
		};
	private : Form_alert::enmAction action;
	public: void showAlert(String^ msg) {
		this->Opacity = 0.0;
		this->StartPosition = FormStartPosition::Manual;
		String^ fname;

		for (int i = 0; i < 10; i++) {
			fname = "alert" + i.ToString();
			Form_alert^ frm = dynamic_cast<Form_alert^>(Application::OpenForms[fname]);
			if (frm == nullptr) {
				this->Name = fname;
				this->X = Screen::PrimaryScreen->WorkingArea.Width - this->Width + 15;
				this->Y = Screen::PrimaryScreen->WorkingArea.Height - this->Width * i;
				this->Location = Point(this->X, this->Y);
				break;
			}
		}
		this->X = Screen::PrimaryScreen->WorkingArea.Width - this->Width - 5;
		Show();
		action = enmAction::start;
		timer1->Interval = 1;
		timer1->Start();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Interval = 1;
		action = enmAction::close;

	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	switch (action)
	{
	case enmAction::wait:
		timer1->Interval = 5000;
		action = enmAction::close;
		break;
	case enmAction::start:
		timer1->Interval = 1;
		Opacity += 0.1;
		if (X < this->Location.X)
		{
			this->Left--;
		}
	}
}
};
}