#pragma once

namespace My7days {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for My7days
	/// </summary>
	public ref class My7days : public System::Windows::Forms::Form
	{
	public:
		My7days(void)
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
		~My7days()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	protected:



	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lesson3;

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
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lesson3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(443, 945);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(1000, 35);
			this->progressBar1->TabIndex = 45;
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->AutoSize = true;
			this->button9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button9->Location = System::Drawing::Point(1571, 898);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->MaximumSize = System::Drawing::Size(533, 246);
			this->button9->MinimumSize = System::Drawing::Size(181, 74);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(320, 132);
			this->button9->TabIndex = 39;
			this->button9->Text = L"Next";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->AutoSize = true;
			this->button8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button8->Location = System::Drawing::Point(13, 898);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->MaximumSize = System::Drawing::Size(533, 246);
			this->button8->MinimumSize = System::Drawing::Size(181, 74);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(320, 132);
			this->button8->TabIndex = 38;
			this->button8->Text = L"Previous";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48));
			this->label2->Location = System::Drawing::Point(194, 123);
			this->label2->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(411, 68);
			this->label2->TabIndex = 36;
			this->label2->Text = L"days in a week";
			this->label2->Click += gcnew System::EventHandler(this, &My7days::label2_Click);
			// 
			// lesson3
			// 
			this->lesson3->AutoSize = true;
			this->lesson3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 56));
			this->lesson3->Location = System::Drawing::Point(25, 11);
			this->lesson3->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
			this->lesson3->Name = L"lesson3";
			this->lesson3->Size = System::Drawing::Size(691, 80);
			this->lesson3->TabIndex = 35;
			this->lesson3->Text = L"Lesson 3 : vocabulary";
			// 
			// My7days
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lesson3);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1030);
			this->Name = L"My7days";
			this->Text = L"My7days";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}