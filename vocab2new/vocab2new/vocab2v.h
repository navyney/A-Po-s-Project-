﻿#pragma once

namespace vocab2new {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for vocab2v
	/// </summary>
	public ref class vocab2v : public System::Windows::Forms::Form
	{
		int numpages = 1;
	public:
		vocab2v(void)
		{
			InitializeComponent();
			changepag(numpages);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~vocab2v()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ nextbutton;
	private: System::Windows::Forms::PictureBox^ previousbutton;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lesson3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ decorleft;

	protected:







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(vocab2v::typeid));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nextbutton = (gcnew System::Windows::Forms::PictureBox());
			this->previousbutton = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lesson3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->decorleft = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(487, 576);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(960, 5);
			this->pictureBox3->TabIndex = 132;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(577, 794);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 40);
			this->button1->TabIndex = 130;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// nextbutton
			// 
			this->nextbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextbutton.BackgroundImage")));
			this->nextbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nextbutton->Location = System::Drawing::Point(1584, 896);
			this->nextbutton->Name = L"nextbutton";
			this->nextbutton->Size = System::Drawing::Size(282, 133);
			this->nextbutton->TabIndex = 129;
			this->nextbutton->TabStop = false;
			this->nextbutton->Click += gcnew System::EventHandler(this, &vocab2v::nextbutton_Click);
			// 
			// previousbutton
			// 
			this->previousbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousbutton.BackgroundImage")));
			this->previousbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->previousbutton->Location = System::Drawing::Point(33, 896);
			this->previousbutton->Name = L"previousbutton";
			this->previousbutton->Size = System::Drawing::Size(300, 130);
			this->previousbutton->TabIndex = 128;
			this->previousbutton->TabStop = false;
			this->previousbutton->Click += gcnew System::EventHandler(this, &vocab2v::previousbutton_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(443, 945);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(1000, 35);
			this->progressBar2->TabIndex = 125;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label7->Location = System::Drawing::Point(525, 738);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(259, 47);
			this->label7->TabIndex = 98;
			this->label7->Text = L"เขาเรียนภาษาจีน";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label6->Location = System::Drawing::Point(523, 688);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(371, 47);
			this->label6->TabIndex = 97;
			this->label6->Text = L"Tā xuéxí hànyǔ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label5->Location = System::Drawing::Point(524, 636);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(279, 47);
			this->label5->TabIndex = 96;
			this->label5->Text = L"他学习汉语。";
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(577, 501);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 40);
			this->button6->TabIndex = 95;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label4->Location = System::Drawing::Point(564, 452);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 46);
			this->label4->TabIndex = 94;
			this->label4->Text = L"ภาษาจีน";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label3->Location = System::Drawing::Point(564, 406);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 46);
			this->label3->TabIndex = 93;
			this->label3->Text = L"hànyǔ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label2->Location = System::Drawing::Point(541, 287);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 128);
			this->label2->TabIndex = 92;
			this->label2->Text = L"汉语";
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->AutoSize = true;
			this->button8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button8->Location = System::Drawing::Point(173, 1180);
			this->button8->MaximumSize = System::Drawing::Size(400, 200);
			this->button8->MinimumSize = System::Drawing::Size(136, 60);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(240, 107);
			this->button8->TabIndex = 90;
			this->button8->Text = L"Previous";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->AutoSize = true;
			this->button9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button9->Location = System::Drawing::Point(1998, 1180);
			this->button9->MaximumSize = System::Drawing::Size(400, 200);
			this->button9->MinimumSize = System::Drawing::Size(136, 60);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(240, 107);
			this->button9->TabIndex = 91;
			this->button9->Text = L"Next";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label8->Location = System::Drawing::Point(765, 159);
			this->label8->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(361, 82);
			this->label8->TabIndex = 124;
			this->label8->Text = L"Vocabulary";
			// 
			// lesson3
			// 
			this->lesson3->AutoSize = true;
			this->lesson3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 86.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lesson3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->lesson3->Location = System::Drawing::Point(457, 11);
			this->lesson3->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
			this->lesson3->Name = L"lesson3";
			this->lesson3->Size = System::Drawing::Size(986, 148);
			this->lesson3->TabIndex = 123;
			this->lesson3->Text = L"Lesson 2 : Family";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(468, 244);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1000, 632);
			this->pictureBox2->TabIndex = 131;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(1442, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(450, 450);
			this->pictureBox1->TabIndex = 127;
			this->pictureBox1->TabStop = false;
			// 
			// decorleft
			// 
			this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
			this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->decorleft->Location = System::Drawing::Point(12, 12);
			this->decorleft->Name = L"decorleft";
			this->decorleft->Size = System::Drawing::Size(450, 450);
			this->decorleft->TabIndex = 126;
			this->decorleft->TabStop = false;
			// 
			// vocab2v
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->nextbutton);
			this->Controls->Add(this->previousbutton);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->decorleft);
			this->Controls->Add(this->lesson3);
			this->Name = L"vocab2v";
			this->Text = L"vocab2v";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void changepag(int numpage2) {
			switch (numpage2) {
			case 1:
				label2->Text = L"汉语";
				label3->Text = L"hànyǔ";
				label4->Text = L"ภาษาจีน";
				label5->Text = L"他学习汉语。";
				label6->Text = L"Tā xuéxí hànyǔ";
				label7->Text = L"เขาเรียนภาษาจีน";
				break;
			case 2:
				label2->Text = L"爸爸";
				label3->Text = L"bàba";
				label4->Text = L"พ่อ";
				label5->Text = L"我爸爸是医生。";
				label6->Text = L"Wǒ bàbà shì yīshēng";
				label7->Text = L"พ่อของฉันเป็นหมอ";
				break;
			case 3:
				label2->Text = L"妈妈";
				label3->Text = L"māmā";
				label4->Text = L"แม่";
				label5->Text = L"我妈妈不在家。";
				label6->Text = L"Wǒ māmā bù zài jiā";
				label7->Text = L"แม่ของฉันไม่อยู่บ้าน";
				break;
			case 4:
				label2->Text = L"哥哥";
				label3->Text = L"gēge";
				label4->Text = L"พี่ชาย";
				label5->Text = L"我哥哥比我大三岁。";
				label6->Text = L"Wǒ gēgē bǐ wǒdà sān suì";
				label7->Text = L"พี่ของฉันอายุมากว่าฉันสามปี";
				break;
			case 5:
				label2->Text = L"弟弟";
				label3->Text = L"dìdi";
				label4->Text = L"น้องชาย";
				label5->Text = L"我有两个弟弟。";
				label6->Text = L"Wǒ hái yǒu liǎng gè dìdì";
				label7->Text = L"ฉันมีน้องชายสองคน";
				break;
			case 6:
				label2->Text = L"妹妹";
				label3->Text = L"mèimèi";
				label4->Text = L"น้องสาว";
				label5->Text = L"我妹妹喜欢白色。";
				label6->Text = L"Wǒ mèimèi xǐhuān báisè";
				label7->Text = L"น้องสาวของฉันชอบสีขาว";
				break;
			case 7:
				label2->Text = L"姐姐";
				label3->Text = L"jiějiě";
				label4->Text = L"พี่สาว";
				label5->Text = L"我有两个姐姐。";
				label6->Text = L"Wǒ yǒu liǎng gè jiějiě";
				label7->Text = L"ฉันมีพี่สาวสองคน";
				break;
			case 8:
				label2->Text = L"他";
				label3->Text = L"tā";
				label4->Text = L"เขา (ผู้ชาย) ";
				label5->Text = L"他是我们的老师。";
				label6->Text = L"Tā shì wǒmén de lǎoshī ";
				label7->Text = L"เขาคือคุณครูของพวกเรา";
				break;

			case 9:
				label2->Text = L"她";
				label3->Text = L"tā";
				label4->Text = L"เขาผู้หญิง";
				label5->Text = L"我认识她的妈妈。";
				label6->Text = L"wǒ rènshí tā de māmā";
				label7->Text = L"ฉันรู้จักแม่ของเขา";
				break;
			case 10:
				label2->Text = L"老师";
				label3->Text = L"lǎoshī";
				label4->Text = L"คุณครู";
				label5->Text = L"他就是我们的科学老师。";
				label6->Text = L"tā jiù shì wǒmén de kēxué lǎoshī";
				label7->Text = L"เขาก็คือคุณครูวิทยาศาสตร์ของพวกเรา";
				break;
			case 11:
				label2->Text = L"喜欢";
				label3->Text = L"xǐhuān";
				label4->Text = L"ชอบ";
				label5->Text = L"我喜欢吃面条。";
				label6->Text = L"wǒ xǐhuān chī miàntiáo";
				label7->Text = L"ฉันชอบกินก๋วยเตี๋ยว";
				break;
			case 12:
				label2->Text = L"医生";
				label3->Text = L"yīshēng";
				label4->Text = L"หมอ";
				label5->Text = L"李医生在医院吗。";
				label6->Text = L"lǐ yīshēng zài yīyuàn má";
				label7->Text = L"หมอลี่อยู่โรงพยาบาลมั้ย";
				break;
			case 13:
				label2->Text = L"学生";
				label3->Text = L"xuéshēng";
				label4->Text = L"นักเรียน";
				label5->Text = L"我们学校里的学生很多。";
				label6->Text = L"wǒmén xuéxiào lǐ de xuéshēng hěn duō";
				label7->Text = L"ข้างในโรงเรียนของฉันมีนักเรียนเยอะ";
				break;
			case 14:
				label2->Text = L"学";
				label3->Text = L"xué";
				label4->Text = L"เรียน";
				label5->Text = L"他学韩语。";
				label6->Text = L"tā xué hányǔ";
				label7->Text = L"เขาเรียนภาษาเกาหลี";
				break;
			}

		}
	private: System::Void nextbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numpages < 14) {
			numpages++;
			changepag(numpages);
		}
	}
	private: System::Void previousbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numpages > 1) {
			numpages--;
			changepag(numpages);
		}
	}
};
}
