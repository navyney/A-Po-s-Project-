#pragma once

namespace vocab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for vocab3
	/// </summary>
	public ref class vocab3 : public System::Windows::Forms::Form
	{
		int numpage3 = 1;
	public:
		vocab3(void)
		{
			InitializeComponent();
			changepage(numpage3);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~vocab3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



















	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ next;
	private: System::Windows::Forms::ProgressBar^ progressBar1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(vocab3::typeid));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->next = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(631, 700);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(207, 39);
			this->label7->TabIndex = 92;
			this->label7->Text = L"คุณรู้จักคนคนนี้มั้ย";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(629, 650);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(361, 50);
			this->label6->TabIndex = 91;
			this->label6->Text = L"Nǐrènshizhègerénma";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(630, 598);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(338, 50);
			this->label5->TabIndex = 90;
			this->label5->Text = L"你认识这个人吗？";
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(678, 463);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 63);
			this->button6->TabIndex = 89;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
			this->label4->Location = System::Drawing::Point(670, 414);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 46);
			this->label4->TabIndex = 88;
			this->label4->Text = L"คุณ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
			this->label3->Location = System::Drawing::Point(670, 368);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 46);
			this->label3->TabIndex = 87;
			this->label3->Text = L"nǐ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(647, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 128);
			this->label2->TabIndex = 86;
			this->label2->Text = L"你";
			this->label2->Click += gcnew System::EventHandler(this, &vocab3::label2_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->AutoSize = true;
			this->button8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button8->Location = System::Drawing::Point(173, 1181);
			this->button8->MaximumSize = System::Drawing::Size(400, 200);
			this->button8->MinimumSize = System::Drawing::Size(136, 60);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(240, 107);
			this->button8->TabIndex = 80;
			this->button8->Text = L"Previous";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button13->AutoSize = true;
			this->button13->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button13->Location = System::Drawing::Point(12, 897);
			this->button13->MaximumSize = System::Drawing::Size(400, 200);
			this->button13->MinimumSize = System::Drawing::Size(136, 60);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(320, 132);
			this->button13->TabIndex = 83;
			this->button13->Text = L"Previous";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &vocab3::button13_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 56));
			this->label1->Location = System::Drawing::Point(19, 7);
			this->label1->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(691, 80);
			this->label1->TabIndex = 82;
			this->label1->Text = L"Lesson 3 : vocabulary";
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->AutoSize = true;
			this->button9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button9->Location = System::Drawing::Point(1998, 1181);
			this->button9->MaximumSize = System::Drawing::Size(400, 200);
			this->button9->MinimumSize = System::Drawing::Size(136, 60);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(240, 107);
			this->button9->TabIndex = 81;
			this->button9->Text = L"Next";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// next
			// 
			this->next->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->next->AutoSize = true;
			this->next->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->next->Location = System::Drawing::Point(1572, 897);
			this->next->MaximumSize = System::Drawing::Size(400, 200);
			this->next->MinimumSize = System::Drawing::Size(136, 60);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(320, 132);
			this->next->TabIndex = 85;
			this->next->Text = L"Next";
			this->next->UseVisualStyleBackColor = true;
			this->next->Click += gcnew System::EventHandler(this, &vocab3::next_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(473, 955);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(1000, 35);
			this->progressBar1->TabIndex = 84;
			// 
			// vocab3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->next);
			this->Controls->Add(this->progressBar1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1030);
			this->Name = L"vocab3";
			this->Text = L"vocab3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   private: System::Void changepage(int numpage) {
			   switch (numpage) {
			   case 1:
				   label2->Text = L"今天";
				   label3->Text = L"jīn tiān";
				   label4->Text = L"วันนี้";
				   label5->Text = L"我今天去清迈。";
				   label6->Text = L"wǒ jīn tiān qù qīngmài";
				   label7->Text = L"วันนี้ฉันไปเชี่ยงใหม่";
				   break;

			   case 2:
				   label2->Text = L"昨天";
				   label3->Text = L"zuó tiān";
				   label4->Text = L"เมื่อวาน";
				   label5->Text = L"他昨天没去学校。";
				   label6->Text = L"tā zuó tiān méi qù xué xiào";
				   label7->Text = L"เมื่อวานเขาไม่ไปโรงเรียน";
				   break;
			   case 3:
				   label2->Text = L"叫";
				   label3->Text = L"jiào";
				   label4->Text = L"เรียกว่า(ใช้กับชื่อ)";
				   label5->Text = L"我的名字叫贾斯汀比伯 ";
				   label6->Text = L"wǒdemíngzìjiàoJiǎsītīngbǐbó";
				   label7->Text = L"ชื่อของฉันคือ Justin Bieber";
				   break;
			   case 4:
				   label2->Text = L"再见";
				   label3->Text = L"zàijiàn";
				   label4->Text = L"ลาก่อน";
				   label5->Text = L"妈妈，我去学校了，再见。";
				   label6->Text = L"māmā ,wǒqùxuéxiàole , zàijiàn";
				   label7->Text = L"แม่ ฉันไปจะไปโรงเรียนแล้ว ลาก่อน";
				   break;

			   case 5:
				   label2->Text = L"好";
				   label3->Text = L"hǎo";
				   label4->Text = L"ดี";
				   label5->Text = L"今天天气很好。";
				   label6->Text = L"Jīntiāntiānqìhěnhǎo";
				   label7->Text = L"วันนี้อากาศดีมาก";
				   break;
			   case 6:
				   label2->Text = L"是";
				   label3->Text = L"shì";
				   label4->Text = L"คือ เป็น	";
				   label5->Text = L"他是老师。	";
				   label6->Text = L"tā shì lǎo shī";
				   label7->Text = L"เขาคือคุณครู";
				   break;
			   case 7:
				   label2->Text = L"大";
				   label3->Text = L"dà";
				   label4->Text = L"ใหญ่";
				   label5->Text = L"这个苹果很大。";
				   label6->Text = L"Zhègepíngguǒhěndà";
				   label7->Text = L"แอปเปิ้ลลูกนี้ใหญ่มาก";
				   break;
			   case 8:
				   label2->Text = L"什么";
				   label3->Text = L"shénme";
				   label4->Text = L"อะไร";
				   label5->Text = L"你做什么？";
				   label6->Text = L"Nǐzuòshénme";
				   label7->Text = L"คุณทำอะไร";
				   break;
			   case 9:
				   label2->Text = L"不";
				   label3->Text = L"bù";
				   label4->Text = L"ไม่";
				   label5->Text = L"我不是大夫。";
				   label6->Text = L"Wǒbùshìdàifu";
				   label7->Text = L"ฉันไม่ใช่หมอ";
				   break;
			   case 10:
				   label2->Text = L"做";
				   label3->Text = L"zuò";
				   label4->Text = L"ทำ";
				   label5->Text = L"我每天做作业。";
				   label6->Text = L"Wǒměitiānzuòzuòyè";
				   label7->Text = L"ฉันทำการบ้านทุกวัน";
				   break;
			   case 11:
				   label2->Text = L"你好";
				   label3->Text = L"nǐhǎo";
				   label4->Text = L"สวัสดี";
				   label5->Text = L"A: 你好     B:你好";
				   label6->Text = L"A: nǐhǎo   B:nǐhǎo";
				   label7->Text = L"A:สวัสดี      B:สวัสดี";
				   break;
			   case 12:
				   label2->Text = L"谢谢";
				   label3->Text = L"xiè xiè";
				   label4->Text = L"ขอบคุณ";
				   label5->Text = L"A: 谢谢你!     B:不客气";
				   label6->Text = L"A: xièxiènǐ     B: bùkèqì";
				   label7->Text = L"A:ขอบคุณ        B:ไม่เป็นไร";
				   break;
			   case 13:
				   label2->Text = L"你好";
				   label3->Text = L"nǐhǎo";
				   label4->Text = L"สวัสดี";
				   label5->Text = L"A: 你好     B:你好";
				   label6->Text = L"A: nǐhǎo   B:nǐhǎo";
				   label7->Text = L"A:สวัสดี      B:สวัสดี";
				   break;
			   case 14:
				   label2->Text = L"谢谢";
				   label3->Text = L"xiè xiè";
				   label4->Text = L"ขอบคุณ";
				   label5->Text = L"A: 谢谢你!     B:不客气";
				   label6->Text = L"A: xièxiènǐ     B: bùkèqì";
				   label7->Text = L"A:ขอบคุณ        B:ไม่เป็นไร";
				   break;
			   }


		   }

private: System::Void next_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numpage3 < 14) {
		numpage3++;
		changepage(numpage3);

	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numpage3 > 1) {
		numpage3--;
		changepage(numpage3);

	}
}
};
}
