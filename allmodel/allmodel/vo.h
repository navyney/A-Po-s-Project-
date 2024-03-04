#pragma once
#include <iostream>
#include <windows.h>
#include "mmSystem.h"

namespace allmodel {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;


		/// <summary>
		/// Summary for vo
		/// </summary>
		public ref class vo : public System::Windows::Forms::Form
		{
		public:
			vo(void)
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
			~vo()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Button^ unsound;
		protected:
		private: System::Windows::Forms::Button^ uansound;
		private: System::Windows::Forms::Button^ uaisound;
		private: System::Windows::Forms::Button^ uisound;
		private: System::Windows::Forms::Button^ uosound;
		private: System::Windows::Forms::Button^ uasound;
		private: System::Windows::Forms::Button^ usound;
		private: System::Windows::Forms::Button^ iongsound;
		private: System::Windows::Forms::Button^ ingsound;
		private: System::Windows::Forms::Button^ insound;
		private: System::Windows::Forms::Button^ iangsound;
		private: System::Windows::Forms::Button^ iansound;
		private: System::Windows::Forms::Button^ iusound;
		private: System::Windows::Forms::Button^ iesound;
		private: System::Windows::Forms::Button^ iaosound;
		private: System::Windows::Forms::Button^ iasound;
		private: System::Windows::Forms::Button^ isound;
		private: System::Windows::Forms::Button^ ünsound;
		private: System::Windows::Forms::Button^ üansound;
		private: System::Windows::Forms::Button^ üesound;
		private: System::Windows::Forms::Button^ üsound;
		private: System::Windows::Forms::Button^ ersound;
		private: System::Windows::Forms::Button^ engsound;
		private: System::Windows::Forms::Button^ ensound;
		private: System::Windows::Forms::Button^ eisound;
		private: System::Windows::Forms::Button^ esound;
		private: System::Windows::Forms::Button^ ousound;
		private: System::Windows::Forms::Button^ ongsoung;
		private: System::Windows::Forms::Button^ osound;
		private: System::Windows::Forms::Button^ angsound;
		private: System::Windows::Forms::Button^ ansound;
		private: System::Windows::Forms::Button^ aosound;
		private: System::Windows::Forms::Button^ aisound;
		private: System::Windows::Forms::Button^ asound;






		private: System::Windows::Forms::PictureBox^ nextbutton;
		private: System::Windows::Forms::PictureBox^ previousbutton;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ decorleft;
		private: System::Windows::Forms::ProgressBar^ progressBar1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ lesson3;
		private: System::Windows::Forms::Label^ ün;

		private: System::Windows::Forms::Label^ üan;

		private: System::Windows::Forms::Label^ üe;
		private: System::Windows::Forms::Label^ ü;
		private: System::Windows::Forms::PictureBox^ pictureBox2;

		private: System::Windows::Forms::PictureBox^ pictureBox3;
		private: System::Windows::Forms::Label^ e;
		private: System::Windows::Forms::Label^ ei;
		private: System::Windows::Forms::Label^ en;
		private: System::Windows::Forms::Label^ eng;
		private: System::Windows::Forms::Label^ er;
		private: System::Windows::Forms::Label^ ang;

		private: System::Windows::Forms::Label^ an;

		private: System::Windows::Forms::Label^ ao;

		private: System::Windows::Forms::Label^ ai;
		private: System::Windows::Forms::Label^ a;
		private: System::Windows::Forms::PictureBox^ pictureBox4;
		private: System::Windows::Forms::PictureBox^ pictureBox5;
		private: System::Windows::Forms::Label^ ou;

		private: System::Windows::Forms::Label^ ong;

		private: System::Windows::Forms::Label^ o;
		private: System::Windows::Forms::PictureBox^ pictureBox6;
		private: System::Windows::Forms::PictureBox^ pictureBox7;
		private: System::Windows::Forms::Label^ iu;
		private: System::Windows::Forms::Label^ ie;
		private: System::Windows::Forms::Label^ iao;
		private: System::Windows::Forms::Label^ ia;
		private: System::Windows::Forms::Label^ i;
		private: System::Windows::Forms::Label^ iong;
		private: System::Windows::Forms::Label^ ing;
		private: System::Windows::Forms::Label^ in1;
		private: System::Windows::Forms::Label^ iang;
		private: System::Windows::Forms::Label^ ian;
		private: System::Windows::Forms::PictureBox^ pictureBox8;
		private: System::Windows::Forms::Label^ uo;
		private: System::Windows::Forms::Label^ ua;
		private: System::Windows::Forms::Label^ u;
		private: System::Windows::Forms::Label^ uan;
		private: System::Windows::Forms::Label^ uai;
		private: System::Windows::Forms::Label^ ui;
		private: System::Windows::Forms::Label^ un;








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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(vo::typeid));
				this->unsound = (gcnew System::Windows::Forms::Button());
				this->uansound = (gcnew System::Windows::Forms::Button());
				this->uaisound = (gcnew System::Windows::Forms::Button());
				this->uisound = (gcnew System::Windows::Forms::Button());
				this->uosound = (gcnew System::Windows::Forms::Button());
				this->uasound = (gcnew System::Windows::Forms::Button());
				this->usound = (gcnew System::Windows::Forms::Button());
				this->iongsound = (gcnew System::Windows::Forms::Button());
				this->ingsound = (gcnew System::Windows::Forms::Button());
				this->insound = (gcnew System::Windows::Forms::Button());
				this->iangsound = (gcnew System::Windows::Forms::Button());
				this->iansound = (gcnew System::Windows::Forms::Button());
				this->iusound = (gcnew System::Windows::Forms::Button());
				this->iesound = (gcnew System::Windows::Forms::Button());
				this->iaosound = (gcnew System::Windows::Forms::Button());
				this->iasound = (gcnew System::Windows::Forms::Button());
				this->isound = (gcnew System::Windows::Forms::Button());
				this->ünsound = (gcnew System::Windows::Forms::Button());
				this->üansound = (gcnew System::Windows::Forms::Button());
				this->üesound = (gcnew System::Windows::Forms::Button());
				this->üsound = (gcnew System::Windows::Forms::Button());
				this->ersound = (gcnew System::Windows::Forms::Button());
				this->engsound = (gcnew System::Windows::Forms::Button());
				this->ensound = (gcnew System::Windows::Forms::Button());
				this->eisound = (gcnew System::Windows::Forms::Button());
				this->esound = (gcnew System::Windows::Forms::Button());
				this->ousound = (gcnew System::Windows::Forms::Button());
				this->ongsoung = (gcnew System::Windows::Forms::Button());
				this->osound = (gcnew System::Windows::Forms::Button());
				this->angsound = (gcnew System::Windows::Forms::Button());
				this->ansound = (gcnew System::Windows::Forms::Button());
				this->aosound = (gcnew System::Windows::Forms::Button());
				this->aisound = (gcnew System::Windows::Forms::Button());
				this->asound = (gcnew System::Windows::Forms::Button());
				this->nextbutton = (gcnew System::Windows::Forms::PictureBox());
				this->previousbutton = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->decorleft = (gcnew System::Windows::Forms::PictureBox());
				this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->lesson3 = (gcnew System::Windows::Forms::Label());
				this->ün = (gcnew System::Windows::Forms::Label());
				this->üan = (gcnew System::Windows::Forms::Label());
				this->üe = (gcnew System::Windows::Forms::Label());
				this->ü = (gcnew System::Windows::Forms::Label());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				this->e = (gcnew System::Windows::Forms::Label());
				this->ei = (gcnew System::Windows::Forms::Label());
				this->en = (gcnew System::Windows::Forms::Label());
				this->eng = (gcnew System::Windows::Forms::Label());
				this->er = (gcnew System::Windows::Forms::Label());
				this->ang = (gcnew System::Windows::Forms::Label());
				this->an = (gcnew System::Windows::Forms::Label());
				this->ao = (gcnew System::Windows::Forms::Label());
				this->ai = (gcnew System::Windows::Forms::Label());
				this->a = (gcnew System::Windows::Forms::Label());
				this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
				this->ou = (gcnew System::Windows::Forms::Label());
				this->ong = (gcnew System::Windows::Forms::Label());
				this->o = (gcnew System::Windows::Forms::Label());
				this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
				this->iu = (gcnew System::Windows::Forms::Label());
				this->ie = (gcnew System::Windows::Forms::Label());
				this->iao = (gcnew System::Windows::Forms::Label());
				this->ia = (gcnew System::Windows::Forms::Label());
				this->i = (gcnew System::Windows::Forms::Label());
				this->iong = (gcnew System::Windows::Forms::Label());
				this->ing = (gcnew System::Windows::Forms::Label());
				this->in1 = (gcnew System::Windows::Forms::Label());
				this->iang = (gcnew System::Windows::Forms::Label());
				this->ian = (gcnew System::Windows::Forms::Label());
				this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
				this->uo = (gcnew System::Windows::Forms::Label());
				this->ua = (gcnew System::Windows::Forms::Label());
				this->u = (gcnew System::Windows::Forms::Label());
				this->uan = (gcnew System::Windows::Forms::Label());
				this->uai = (gcnew System::Windows::Forms::Label());
				this->ui = (gcnew System::Windows::Forms::Label());
				this->un = (gcnew System::Windows::Forms::Label());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
				this->SuspendLayout();
				// 
				// unsound
				// 
				this->unsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"unsound.BackgroundImage")));
				this->unsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->unsound->Location = System::Drawing::Point(561, 831);
				this->unsound->Name = L"unsound";
				this->unsound->Size = System::Drawing::Size(40, 40);
				this->unsound->TabIndex = 168;
				this->unsound->UseVisualStyleBackColor = true;
				this->unsound->Click += gcnew System::EventHandler(this, &vo::unsound_Click);
				// 
				// uansound
				// 
				this->uansound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uansound.BackgroundImage")));
				this->uansound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->uansound->Location = System::Drawing::Point(692, 752);
				this->uansound->Name = L"uansound";
				this->uansound->Size = System::Drawing::Size(40, 40);
				this->uansound->TabIndex = 167;
				this->uansound->UseVisualStyleBackColor = true;
				this->uansound->Click += gcnew System::EventHandler(this, &vo::uansound_Click);
				// 
				// uaisound
				// 
				this->uaisound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uaisound.BackgroundImage")));
				this->uaisound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->uaisound->Location = System::Drawing::Point(692, 675);
				this->uaisound->Name = L"uaisound";
				this->uaisound->Size = System::Drawing::Size(40, 40);
				this->uaisound->TabIndex = 166;
				this->uaisound->UseVisualStyleBackColor = true;
				this->uaisound->Click += gcnew System::EventHandler(this, &vo::uaisound_Click);
				// 
				// uisound
				// 
				this->uisound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uisound.BackgroundImage")));
				this->uisound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->uisound->Location = System::Drawing::Point(692, 599);
				this->uisound->Name = L"uisound";
				this->uisound->Size = System::Drawing::Size(40, 40);
				this->uisound->TabIndex = 165;
				this->uisound->UseVisualStyleBackColor = true;
				this->uisound->Click += gcnew System::EventHandler(this, &vo::uisound_Click);
				// 
				// uosound
				// 
				this->uosound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uosound.BackgroundImage")));
				this->uosound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->uosound->Location = System::Drawing::Point(413, 752);
				this->uosound->Name = L"uosound";
				this->uosound->Size = System::Drawing::Size(40, 40);
				this->uosound->TabIndex = 164;
				this->uosound->UseVisualStyleBackColor = true;
				this->uosound->Click += gcnew System::EventHandler(this, &vo::uosound_Click);
				// 
				// uasound
				// 
				this->uasound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uasound.BackgroundImage")));
				this->uasound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->uasound->Location = System::Drawing::Point(413, 675);
				this->uasound->Name = L"uasound";
				this->uasound->Size = System::Drawing::Size(40, 40);
				this->uasound->TabIndex = 163;
				this->uasound->UseVisualStyleBackColor = true;
				this->uasound->Click += gcnew System::EventHandler(this, &vo::uasound_Click);
				// 
				// usound
				// 
				this->usound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"usound.BackgroundImage")));
				this->usound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->usound->Location = System::Drawing::Point(413, 599);
				this->usound->Name = L"usound";
				this->usound->Size = System::Drawing::Size(40, 40);
				this->usound->TabIndex = 162;
				this->usound->UseVisualStyleBackColor = true;
				this->usound->Click += gcnew System::EventHandler(this, &vo::usound_Click);
				// 
				// iongsound
				// 
				this->iongsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iongsound.BackgroundImage")));
				this->iongsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->iongsound->Location = System::Drawing::Point(1671, 832);
				this->iongsound->Name = L"iongsound";
				this->iongsound->Size = System::Drawing::Size(40, 40);
				this->iongsound->TabIndex = 161;
				this->iongsound->UseVisualStyleBackColor = true;
				this->iongsound->Click += gcnew System::EventHandler(this, &vo::iongsound_Click);
				// 
				// ingsound
				// 
				this->ingsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ingsound.BackgroundImage")));
				this->ingsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ingsound->Location = System::Drawing::Point(1671, 755);
				this->ingsound->Name = L"ingsound";
				this->ingsound->Size = System::Drawing::Size(40, 40);
				this->ingsound->TabIndex = 160;
				this->ingsound->UseVisualStyleBackColor = true;
				this->ingsound->Click += gcnew System::EventHandler(this, &vo::ingsound_Click);
				// 
				// insound
				// 
				this->insound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"insound.BackgroundImage")));
				this->insound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->insound->Location = System::Drawing::Point(1671, 681);
				this->insound->Name = L"insound";
				this->insound->Size = System::Drawing::Size(40, 40);
				this->insound->TabIndex = 159;
				this->insound->UseVisualStyleBackColor = true;
				this->insound->Click += gcnew System::EventHandler(this, &vo::insound_Click);
				// 
				// iangsound
				// 
				this->iangsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iangsound.BackgroundImage")));
				this->iangsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->iangsound->Location = System::Drawing::Point(1671, 598);
				this->iangsound->Name = L"iangsound";
				this->iangsound->Size = System::Drawing::Size(40, 40);
				this->iangsound->TabIndex = 158;
				this->iangsound->UseVisualStyleBackColor = true;
				this->iangsound->Click += gcnew System::EventHandler(this, &vo::iangsound_Click);
				// 
				// iansound
				// 
				this->iansound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iansound.BackgroundImage")));
				this->iansound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->iansound->Location = System::Drawing::Point(1671, 520);
				this->iansound->Name = L"iansound";
				this->iansound->Size = System::Drawing::Size(40, 40);
				this->iansound->TabIndex = 157;
				this->iansound->UseVisualStyleBackColor = true;
				this->iansound->Click += gcnew System::EventHandler(this, &vo::iansound_Click);
				// 
				// iusound
				// 
				this->iusound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iusound.BackgroundImage")));
				this->iusound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->iusound->Location = System::Drawing::Point(1366, 832);
				this->iusound->Name = L"iusound";
				this->iusound->Size = System::Drawing::Size(40, 40);
				this->iusound->TabIndex = 156;
				this->iusound->UseVisualStyleBackColor = true;
				this->iusound->Click += gcnew System::EventHandler(this, &vo::iusound_Click);
				// 
				// iesound
				// 
				this->iesound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iesound.BackgroundImage")));
				this->iesound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->iesound->Location = System::Drawing::Point(1366, 755);
				this->iesound->Name = L"iesound";
				this->iesound->Size = System::Drawing::Size(40, 40);
				this->iesound->TabIndex = 155;
				this->iesound->UseVisualStyleBackColor = true;
				this->iesound->Click += gcnew System::EventHandler(this, &vo::iesound_Click);
				// 
				// iaosound
				// 
				this->iaosound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iaosound.BackgroundImage")));
				this->iaosound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->iaosound->Location = System::Drawing::Point(1366, 678);
				this->iaosound->Name = L"iaosound";
				this->iaosound->Size = System::Drawing::Size(40, 40);
				this->iaosound->TabIndex = 154;
				this->iaosound->UseVisualStyleBackColor = true;
				this->iaosound->Click += gcnew System::EventHandler(this, &vo::iaosound_Click);
				// 
				// iasound
				// 
				this->iasound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iasound.BackgroundImage")));
				this->iasound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->iasound->Location = System::Drawing::Point(1366, 598);
				this->iasound->Name = L"iasound";
				this->iasound->Size = System::Drawing::Size(40, 40);
				this->iasound->TabIndex = 153;
				this->iasound->UseVisualStyleBackColor = true;
				this->iasound->Click += gcnew System::EventHandler(this, &vo::iasound_Click);
				// 
				// isound
				// 
				this->isound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"isound.BackgroundImage")));
				this->isound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->isound->Location = System::Drawing::Point(1366, 520);
				this->isound->Name = L"isound";
				this->isound->Size = System::Drawing::Size(40, 40);
				this->isound->TabIndex = 152;
				this->isound->UseVisualStyleBackColor = true;
				this->isound->Click += gcnew System::EventHandler(this, &vo::isound_Click);
				// 
				// ünsound
				// 
				this->ünsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ünsound.BackgroundImage")));
				this->ünsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ünsound->Location = System::Drawing::Point(1514, 431);
				this->ünsound->Name = L"ünsound";
				this->ünsound->Size = System::Drawing::Size(40, 40);
				this->ünsound->TabIndex = 151;
				this->ünsound->UseVisualStyleBackColor = true;
				this->ünsound->Click += gcnew System::EventHandler(this, &vo::ünsound_Click);
				// 
				// üansound
				// 
				this->üansound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"üansound.BackgroundImage")));
				this->üansound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->üansound->Location = System::Drawing::Point(1514, 354);
				this->üansound->Name = L"üansound";
				this->üansound->Size = System::Drawing::Size(40, 40);
				this->üansound->TabIndex = 150;
				this->üansound->UseVisualStyleBackColor = true;
				this->üansound->Click += gcnew System::EventHandler(this, &vo::üansound_Click);
				// 
				// üesound
				// 
				this->üesound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"üesound.BackgroundImage")));
				this->üesound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->üesound->Location = System::Drawing::Point(1514, 274);
				this->üesound->Name = L"üesound";
				this->üesound->Size = System::Drawing::Size(40, 40);
				this->üesound->TabIndex = 149;
				this->üesound->UseVisualStyleBackColor = true;
				this->üesound->Click += gcnew System::EventHandler(this, &vo::üesound_Click);
				// 
				// üsound
				// 
				this->üsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"üsound.BackgroundImage")));
				this->üsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->üsound->Location = System::Drawing::Point(1514, 196);
				this->üsound->Name = L"üsound";
				this->üsound->Size = System::Drawing::Size(40, 40);
				this->üsound->TabIndex = 148;
				this->üsound->UseVisualStyleBackColor = true;
				this->üsound->Click += gcnew System::EventHandler(this, &vo::üsound_Click);
				// 
				// ersound
				// 
				this->ersound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ersound.BackgroundImage")));
				this->ersound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ersound->Location = System::Drawing::Point(1030, 832);
				this->ersound->Name = L"ersound";
				this->ersound->Size = System::Drawing::Size(40, 40);
				this->ersound->TabIndex = 147;
				this->ersound->UseVisualStyleBackColor = true;
				this->ersound->Click += gcnew System::EventHandler(this, &vo::ersound_Click);
				// 
				// engsound
				// 
				this->engsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"engsound.BackgroundImage")));
				this->engsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->engsound->Location = System::Drawing::Point(1030, 749);
				this->engsound->Name = L"engsound";
				this->engsound->Size = System::Drawing::Size(40, 40);
				this->engsound->TabIndex = 146;
				this->engsound->UseVisualStyleBackColor = true;
				this->engsound->Click += gcnew System::EventHandler(this, &vo::engsound_Click);
				// 
				// ensound
				// 
				this->ensound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ensound.BackgroundImage")));
				this->ensound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ensound->Location = System::Drawing::Point(1030, 673);
				this->ensound->Name = L"ensound";
				this->ensound->Size = System::Drawing::Size(40, 40);
				this->ensound->TabIndex = 145;
				this->ensound->UseVisualStyleBackColor = true;
				this->ensound->Click += gcnew System::EventHandler(this, &vo::ensound_Click);
				// 
				// eisound
				// 
				this->eisound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eisound.BackgroundImage")));
				this->eisound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->eisound->Location = System::Drawing::Point(1030, 595);
				this->eisound->Name = L"eisound";
				this->eisound->Size = System::Drawing::Size(40, 40);
				this->eisound->TabIndex = 144;
				this->eisound->UseVisualStyleBackColor = true;
				this->eisound->Click += gcnew System::EventHandler(this, &vo::eisound_Click);
				// 
				// esound
				// 
				this->esound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"esound.BackgroundImage")));
				this->esound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->esound->Location = System::Drawing::Point(1030, 515);
				this->esound->Name = L"esound";
				this->esound->Size = System::Drawing::Size(40, 40);
				this->esound->TabIndex = 143;
				this->esound->UseVisualStyleBackColor = true;
				this->esound->Click += gcnew System::EventHandler(this, &vo::esound_Click);
				// 
				// ousound
				// 
				this->ousound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ousound.BackgroundImage")));
				this->ousound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ousound->Location = System::Drawing::Point(1031, 425);
				this->ousound->Name = L"ousound";
				this->ousound->Size = System::Drawing::Size(40, 40);
				this->ousound->TabIndex = 142;
				this->ousound->UseVisualStyleBackColor = true;
				this->ousound->Click += gcnew System::EventHandler(this, &vo::ousound_Click);
				// 
				// ongsoung
				// 
				this->ongsoung->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ongsoung.BackgroundImage")));
				this->ongsoung->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ongsoung->Location = System::Drawing::Point(1031, 345);
				this->ongsoung->Name = L"ongsoung";
				this->ongsoung->Size = System::Drawing::Size(40, 40);
				this->ongsoung->TabIndex = 141;
				this->ongsoung->UseVisualStyleBackColor = true;
				this->ongsoung->Click += gcnew System::EventHandler(this, &vo::ongsoung_Click);
				// 
				// osound
				// 
				this->osound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"osound.BackgroundImage")));
				this->osound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->osound->Location = System::Drawing::Point(1031, 267);
				this->osound->Name = L"osound";
				this->osound->Size = System::Drawing::Size(40, 40);
				this->osound->TabIndex = 140;
				this->osound->UseVisualStyleBackColor = true;
				this->osound->Click += gcnew System::EventHandler(this, &vo::osound_Click);
				// 
				// angsound
				// 
				this->angsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"angsound.BackgroundImage")));
				this->angsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->angsound->Location = System::Drawing::Point(569, 510);
				this->angsound->Name = L"angsound";
				this->angsound->Size = System::Drawing::Size(40, 40);
				this->angsound->TabIndex = 139;
				this->angsound->UseVisualStyleBackColor = true;
				this->angsound->Click += gcnew System::EventHandler(this, &vo::angsound_Click);
				// 
				// ansound
				// 
				this->ansound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ansound.BackgroundImage")));
				this->ansound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ansound->Location = System::Drawing::Point(569, 427);
				this->ansound->Name = L"ansound";
				this->ansound->Size = System::Drawing::Size(40, 40);
				this->ansound->TabIndex = 138;
				this->ansound->UseVisualStyleBackColor = true;
				this->ansound->Click += gcnew System::EventHandler(this, &vo::ansound_Click);
				// 
				// aosound
				// 
				this->aosound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aosound.BackgroundImage")));
				this->aosound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->aosound->Location = System::Drawing::Point(569, 351);
				this->aosound->Name = L"aosound";
				this->aosound->Size = System::Drawing::Size(40, 40);
				this->aosound->TabIndex = 137;
				this->aosound->UseVisualStyleBackColor = true;
				this->aosound->Click += gcnew System::EventHandler(this, &vo::aosound_Click);
				// 
				// aisound
				// 
				this->aisound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aisound.BackgroundImage")));
				this->aisound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->aisound->Location = System::Drawing::Point(569, 273);
				this->aisound->Name = L"aisound";
				this->aisound->Size = System::Drawing::Size(40, 40);
				this->aisound->TabIndex = 136;
				this->aisound->UseVisualStyleBackColor = true;
				this->aisound->Click += gcnew System::EventHandler(this, &vo::aisound_Click);
				// 
				// asound
				// 
				this->asound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"asound.BackgroundImage")));
				this->asound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->asound->Location = System::Drawing::Point(569, 201);
				this->asound->Name = L"asound";
				this->asound->Size = System::Drawing::Size(40, 40);
				this->asound->TabIndex = 135;
				this->asound->UseVisualStyleBackColor = true;
				this->asound->Click += gcnew System::EventHandler(this, &vo::asound_Click);
				// 
				// nextbutton
				// 
				this->nextbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextbutton.BackgroundImage")));
				this->nextbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->nextbutton->Location = System::Drawing::Point(1584, 897);
				this->nextbutton->Name = L"nextbutton";
				this->nextbutton->Size = System::Drawing::Size(282, 133);
				this->nextbutton->TabIndex = 134;
				this->nextbutton->TabStop = false;
				this->nextbutton->Click += gcnew System::EventHandler(this, &vo::nextbutton_Click);
				// 
				// previousbutton
				// 
				this->previousbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousbutton.BackgroundImage")));
				this->previousbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->previousbutton->Location = System::Drawing::Point(33, 897);
				this->previousbutton->Name = L"previousbutton";
				this->previousbutton->Size = System::Drawing::Size(300, 130);
				this->previousbutton->TabIndex = 133;
				this->previousbutton->TabStop = false;
				this->previousbutton->Click += gcnew System::EventHandler(this, &vo::previousbutton_Click);
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox1->Location = System::Drawing::Point(1442, 13);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(450, 450);
				this->pictureBox1->TabIndex = 132;
				this->pictureBox1->TabStop = false;
				// 
				// decorleft
				// 
				this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
				this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->decorleft->Location = System::Drawing::Point(12, 13);
				this->decorleft->Name = L"decorleft";
				this->decorleft->Size = System::Drawing::Size(450, 450);
				this->decorleft->TabIndex = 131;
				this->decorleft->TabStop = false;
				// 
				// progressBar1
				// 
				this->progressBar1->Location = System::Drawing::Point(443, 946);
				this->progressBar1->Name = L"progressBar1";
				this->progressBar1->Size = System::Drawing::Size(1000, 35);
				this->progressBar1->TabIndex = 130;
				this->progressBar1->Value = 40;
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label2->Location = System::Drawing::Point(903, 141);
				this->label2->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(112, 82);
				this->label2->TabIndex = 129;
				this->label2->Text = L"สระ";
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
				this->lesson3->TabIndex = 128;
				this->lesson3->Text = L"Lesson 0 : pinyin";
				// 
				// ün
				// 
				this->ün->AutoSize = true;
				this->ün->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ün->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ün->Location = System::Drawing::Point(1315, 423);
				this->ün->Name = L"ün";
				this->ün->Size = System::Drawing::Size(161, 55);
				this->ün->TabIndex = 176;
				this->ün->Text = L"ün อวิน";
				// 
				// üan
				// 
				this->üan->AutoSize = true;
				this->üan->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->üan->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->üan->Location = System::Drawing::Point(1287, 344);
				this->üan->Name = L"üan";
				this->üan->Size = System::Drawing::Size(221, 55);
				this->üan->TabIndex = 174;
				this->üan->Text = L"üan อเวียน";
				// 
				// üe
				// 
				this->üe->AutoSize = true;
				this->üe->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->üe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->üe->Location = System::Drawing::Point(1340, 265);
				this->üe->Name = L"üe";
				this->üe->Size = System::Drawing::Size(155, 55);
				this->üe->TabIndex = 172;
				this->üe->Text = L"üe อวีย";
				// 
				// ü
				// 
				this->ü->AutoSize = true;
				this->ü->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ü->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ü->Location = System::Drawing::Point(1382, 188);
				this->ü->Name = L"ü";
				this->ü->Size = System::Drawing::Size(84, 55);
				this->ü->TabIndex = 170;
				this->ü->Text = L"ü วี";
				// 
				// pictureBox2
				// 
				this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
				this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox2->Location = System::Drawing::Point(1279, 174);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(301, 318);
				this->pictureBox2->TabIndex = 169;
				this->pictureBox2->TabStop = false;
				// 
				// pictureBox3
				// 
				this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
				this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox3->Location = System::Drawing::Point(799, 496);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(300, 396);
				this->pictureBox3->TabIndex = 177;
				this->pictureBox3->TabStop = false;
				// 
				// e
				// 
				this->e->AutoSize = true;
				this->e->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->e->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->e->Location = System::Drawing::Point(877, 510);
				this->e->Name = L"e";
				this->e->Size = System::Drawing::Size(119, 55);
				this->e->TabIndex = 178;
				this->e->Text = L"e เออ";
				// 
				// ei
				// 
				this->ei->AutoSize = true;
				this->ei->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ei->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ei->Location = System::Drawing::Point(862, 587);
				this->ei->Name = L"ei";
				this->ei->Size = System::Drawing::Size(131, 55);
				this->ei->TabIndex = 179;
				this->ei->Text = L"ei เอย";
				// 
				// en
				// 
				this->en->AutoSize = true;
				this->en->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->en->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->en->Location = System::Drawing::Point(849, 663);
				this->en->Name = L"en";
				this->en->Size = System::Drawing::Size(150, 55);
				this->en->TabIndex = 180;
				this->en->Text = L"en เอิน";
				// 
				// eng
				// 
				this->eng->AutoSize = true;
				this->eng->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->eng->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->eng->Location = System::Drawing::Point(837, 745);
				this->eng->Name = L"eng";
				this->eng->Size = System::Drawing::Size(166, 55);
				this->eng->TabIndex = 181;
				this->eng->Text = L"eng เอิง";
				// 
				// er
				// 
				this->er->AutoSize = true;
				this->er->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->er->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->er->Location = System::Drawing::Point(843, 824);
				this->er->Name = L"er";
				this->er->Size = System::Drawing::Size(156, 55);
				this->er->TabIndex = 182;
				this->er->Text = L"er เออร์";
				// 
				// ang
				// 
				this->ang->AutoSize = true;
				this->ang->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ang->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ang->Location = System::Drawing::Point(391, 500);
				this->ang->Name = L"ang";
				this->ang->Size = System::Drawing::Size(154, 55);
				this->ang->TabIndex = 193;
				this->ang->Text = L"ang อัง";
				// 
				// an
				// 
				this->an->AutoSize = true;
				this->an->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->an->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->an->Location = System::Drawing::Point(407, 423);
				this->an->Name = L"an";
				this->an->Size = System::Drawing::Size(138, 55);
				this->an->TabIndex = 192;
				this->an->Text = L"an อัน";
				// 
				// ao
				// 
				this->ao->AutoSize = true;
				this->ao->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ao->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ao->Location = System::Drawing::Point(403, 344);
				this->ao->Name = L"ao";
				this->ao->Size = System::Drawing::Size(142, 55);
				this->ao->TabIndex = 191;
				this->ao->Text = L"ao เอา";
				// 
				// ai
				// 
				this->ai->AutoSize = true;
				this->ai->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ai->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ai->Location = System::Drawing::Point(401, 265);
				this->ai->Name = L"ai";
				this->ai->Size = System::Drawing::Size(140, 55);
				this->ai->TabIndex = 190;
				this->ai->Text = L"ai อาย";
				// 
				// a
				// 
				this->a->AutoSize = true;
				this->a->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->a->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->a->Location = System::Drawing::Point(417, 188);
				this->a->Name = L"a";
				this->a->Size = System::Drawing::Size(105, 55);
				this->a->TabIndex = 189;
				this->a->Text = L"a อา";
				// 
				// pictureBox4
				// 
				this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
				this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox4->Location = System::Drawing::Point(337, 174);
				this->pictureBox4->Name = L"pictureBox4";
				this->pictureBox4->Size = System::Drawing::Size(300, 396);
				this->pictureBox4->TabIndex = 188;
				this->pictureBox4->TabStop = false;
				// 
				// pictureBox5
				// 
				this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
				this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox5->Location = System::Drawing::Point(798, 245);
				this->pictureBox5->Name = L"pictureBox5";
				this->pictureBox5->Size = System::Drawing::Size(301, 237);
				this->pictureBox5->TabIndex = 194;
				this->pictureBox5->TabStop = false;
				// 
				// ou
				// 
				this->ou->AutoSize = true;
				this->ou->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ou->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ou->Location = System::Drawing::Point(854, 415);
				this->ou->Name = L"ou";
				this->ou->Size = System::Drawing::Size(149, 55);
				this->ou->TabIndex = 197;
				this->ou->Text = L"ou โอว";
				// 
				// ong
				// 
				this->ong->AutoSize = true;
				this->ong->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ong->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ong->Location = System::Drawing::Point(845, 339);
				this->ong->Name = L"ong";
				this->ong->Size = System::Drawing::Size(154, 55);
				this->ong->TabIndex = 196;
				this->ong->Text = L"ong อง";
				// 
				// o
				// 
				this->o->AutoSize = true;
				this->o->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->o->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->o->Location = System::Drawing::Point(879, 258);
				this->o->Name = L"o";
				this->o->Size = System::Drawing::Size(101, 55);
				this->o->TabIndex = 195;
				this->o->Text = L"o โอ";
				// 
				// pictureBox6
				// 
				this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
				this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox6->Location = System::Drawing::Point(1137, 498);
				this->pictureBox6->Name = L"pictureBox6";
				this->pictureBox6->Size = System::Drawing::Size(300, 396);
				this->pictureBox6->TabIndex = 198;
				this->pictureBox6->TabStop = false;
				// 
				// pictureBox7
				// 
				this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
				this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox7->Location = System::Drawing::Point(1431, 498);
				this->pictureBox7->Name = L"pictureBox7";
				this->pictureBox7->Size = System::Drawing::Size(300, 396);
				this->pictureBox7->TabIndex = 199;
				this->pictureBox7->TabStop = false;
				// 
				// iu
				// 
				this->iu->AutoSize = true;
				this->iu->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->iu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->iu->Location = System::Drawing::Point(1198, 824);
				this->iu->Name = L"iu";
				this->iu->Size = System::Drawing::Size(119, 55);
				this->iu->TabIndex = 204;
				this->iu->Text = L"iu ยิว";
				// 
				// ie
				// 
				this->ie->AutoSize = true;
				this->ie->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ie->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ie->Location = System::Drawing::Point(1196, 745);
				this->ie->Name = L"ie";
				this->ie->Size = System::Drawing::Size(131, 55);
				this->ie->TabIndex = 203;
				this->ie->Text = L"ie อีเย";
				// 
				// iao
				// 
				this->iao->AutoSize = true;
				this->iao->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->iao->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->iao->Location = System::Drawing::Point(1167, 664);
				this->iao->Name = L"iao";
				this->iao->Size = System::Drawing::Size(177, 55);
				this->iao->TabIndex = 202;
				this->iao->Text = L"iao เอียว";
				// 
				// ia
				// 
				this->ia->AutoSize = true;
				this->ia->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ia->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ia->Location = System::Drawing::Point(1189, 588);
				this->ia->Name = L"ia";
				this->ia->Size = System::Drawing::Size(131, 55);
				this->ia->TabIndex = 201;
				this->ia->Text = L"ia เอีย";
				// 
				// i
				// 
				this->i->AutoSize = true;
				this->i->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->i->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->i->Location = System::Drawing::Point(1211, 511);
				this->i->Name = L"i";
				this->i->Size = System::Drawing::Size(71, 55);
				this->i->TabIndex = 200;
				this->i->Text = L"i อี";
				// 
				// iong
				// 
				this->iong->AutoSize = true;
				this->iong->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->iong->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->iong->Location = System::Drawing::Point(1448, 824);
				this->iong->Name = L"iong";
				this->iong->Size = System::Drawing::Size(222, 55);
				this->iong->TabIndex = 209;
				this->iong->Text = L"iong อี-โอง";
				// 
				// ing
				// 
				this->ing->AutoSize = true;
				this->ing->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ing->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ing->Location = System::Drawing::Point(1497, 742);
				this->ing->Name = L"ing";
				this->ing->Size = System::Drawing::Size(141, 55);
				this->ing->TabIndex = 208;
				this->ing->Text = L"ing อิง";
				// 
				// in1
				// 
				this->in1->AutoSize = true;
				this->in1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->in1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->in1->Location = System::Drawing::Point(1513, 664);
				this->in1->Name = L"in1";
				this->in1->Size = System::Drawing::Size(125, 55);
				this->in1->TabIndex = 207;
				this->in1->Text = L"in อิน";
				// 
				// iang
				// 
				this->iang->AutoSize = true;
				this->iang->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->iang->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->iang->Location = System::Drawing::Point(1464, 588);
				this->iang->Name = L"iang";
				this->iang->Size = System::Drawing::Size(201, 55);
				this->iang->TabIndex = 206;
				this->iang->Text = L"iang เอียง";
				// 
				// ian
				// 
				this->ian->AutoSize = true;
				this->ian->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ian->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ian->Location = System::Drawing::Point(1464, 511);
				this->ian->Name = L"ian";
				this->ian->Size = System::Drawing::Size(185, 55);
				this->ian->TabIndex = 205;
				this->ian->Text = L"ian เอียน";
				// 
				// pictureBox8
				// 
				this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
				this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox8->Location = System::Drawing::Point(177, 575);
				this->pictureBox8->Name = L"pictureBox8";
				this->pictureBox8->Size = System::Drawing::Size(592, 317);
				this->pictureBox8->TabIndex = 210;
				this->pictureBox8->TabStop = false;
				// 
				// uo
				// 
				this->uo->AutoSize = true;
				this->uo->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->uo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->uo->Location = System::Drawing::Point(245, 742);
				this->uo->Name = L"uo";
				this->uo->Size = System::Drawing::Size(132, 55);
				this->uo->TabIndex = 213;
				this->uo->Text = L"uo อัว";
				// 
				// ua
				// 
				this->ua->AutoSize = true;
				this->ua->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ua->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ua->Location = System::Drawing::Point(245, 666);
				this->ua->Name = L"ua";
				this->ua->Size = System::Drawing::Size(132, 55);
				this->ua->TabIndex = 212;
				this->ua->Text = L"ua อา";
				// 
				// u
				// 
				this->u->AutoSize = true;
				this->u->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->u->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->u->Location = System::Drawing::Point(267, 588);
				this->u->Name = L"u";
				this->u->Size = System::Drawing::Size(86, 55);
				this->u->TabIndex = 211;
				this->u->Text = L"u อู";
				// 
				// uan
				// 
				this->uan->AutoSize = true;
				this->uan->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->uan->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->uan->Location = System::Drawing::Point(501, 742);
				this->uan->Name = L"uan";
				this->uan->Size = System::Drawing::Size(186, 55);
				this->uan->TabIndex = 216;
				this->uan->Text = L"uan อวน";
				// 
				// uai
				// 
				this->uai->AutoSize = true;
				this->uai->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->uai->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->uai->Location = System::Drawing::Point(516, 666);
				this->uai->Name = L"uai";
				this->uai->Size = System::Drawing::Size(156, 55);
				this->uai->TabIndex = 215;
				this->uai->Text = L"uai อไว";
				// 
				// ui
				// 
				this->ui->AutoSize = true;
				this->ui->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ui->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ui->Location = System::Drawing::Point(542, 588);
				this->ui->Name = L"ui";
				this->ui->Size = System::Drawing::Size(121, 55);
				this->ui->TabIndex = 214;
				this->ui->Text = L"ui อุย";
				// 
				// un
				// 
				this->un->AutoSize = true;
				this->un->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->un->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->un->Location = System::Drawing::Point(386, 821);
				this->un->Name = L"un";
				this->un->Size = System::Drawing::Size(140, 55);
				this->un->TabIndex = 217;
				this->un->Text = L"un อุน";
				// 
				// vo
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1904, 1041);
				this->Controls->Add(this->un);
				this->Controls->Add(this->uan);
				this->Controls->Add(this->uai);
				this->Controls->Add(this->ui);
				this->Controls->Add(this->uo);
				this->Controls->Add(this->ua);
				this->Controls->Add(this->u);
				this->Controls->Add(this->iong);
				this->Controls->Add(this->ing);
				this->Controls->Add(this->in1);
				this->Controls->Add(this->iang);
				this->Controls->Add(this->ian);
				this->Controls->Add(this->iu);
				this->Controls->Add(this->ie);
				this->Controls->Add(this->iao);
				this->Controls->Add(this->ia);
				this->Controls->Add(this->i);
				this->Controls->Add(this->ou);
				this->Controls->Add(this->ong);
				this->Controls->Add(this->o);
				this->Controls->Add(this->ang);
				this->Controls->Add(this->an);
				this->Controls->Add(this->ao);
				this->Controls->Add(this->ai);
				this->Controls->Add(this->a);
				this->Controls->Add(this->er);
				this->Controls->Add(this->eng);
				this->Controls->Add(this->en);
				this->Controls->Add(this->ei);
				this->Controls->Add(this->e);
				this->Controls->Add(this->ün);
				this->Controls->Add(this->üan);
				this->Controls->Add(this->üe);
				this->Controls->Add(this->ü);
				this->Controls->Add(this->iongsound);
				this->Controls->Add(this->ingsound);
				this->Controls->Add(this->insound);
				this->Controls->Add(this->iangsound);
				this->Controls->Add(this->iansound);
				this->Controls->Add(this->iusound);
				this->Controls->Add(this->iesound);
				this->Controls->Add(this->iaosound);
				this->Controls->Add(this->iasound);
				this->Controls->Add(this->isound);
				this->Controls->Add(this->ünsound);
				this->Controls->Add(this->üansound);
				this->Controls->Add(this->üesound);
				this->Controls->Add(this->üsound);
				this->Controls->Add(this->ersound);
				this->Controls->Add(this->engsound);
				this->Controls->Add(this->ensound);
				this->Controls->Add(this->eisound);
				this->Controls->Add(this->esound);
				this->Controls->Add(this->ousound);
				this->Controls->Add(this->ongsoung);
				this->Controls->Add(this->osound);
				this->Controls->Add(this->angsound);
				this->Controls->Add(this->ansound);
				this->Controls->Add(this->aosound);
				this->Controls->Add(this->aisound);
				this->Controls->Add(this->asound);
				this->Controls->Add(this->previousbutton);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->pictureBox2);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->pictureBox4);
				this->Controls->Add(this->decorleft);
				this->Controls->Add(this->pictureBox5);
				this->Controls->Add(this->pictureBox6);
				this->Controls->Add(this->unsound);
				this->Controls->Add(this->uansound);
				this->Controls->Add(this->uaisound);
				this->Controls->Add(this->uisound);
				this->Controls->Add(this->uosound);
				this->Controls->Add(this->uasound);
				this->Controls->Add(this->usound);
				this->Controls->Add(this->progressBar1);
				this->Controls->Add(this->pictureBox7);
				this->Controls->Add(this->nextbutton);
				this->Controls->Add(this->pictureBox8);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->lesson3);
				this->MaximumSize = System::Drawing::Size(1920, 1080);
				this->MinimumSize = System::Drawing::Size(1918, 1030);
				this->Name = L"vo";
				this->Text = L"vo";
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				this->Load += gcnew System::EventHandler(this, &vo::vo_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
			public:bool switchToformcon = false;
			public:bool switchToformtone = false;
		private: System::Void vo_Load(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void previousbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformcon = true;
		}
		private: System::Void nextbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformtone = true;
		}
		private: System::Void asound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("a.wav"), NULL, SND_SYNC);
		}
		private: System::Void aisound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ai.wav"), NULL, SND_SYNC);
		}
		private: System::Void aosound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ao.wav"), NULL, SND_SYNC);
		}
		private: System::Void ansound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("an.wav"), NULL, SND_SYNC);
		}
		private: System::Void angsound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ang.wav"), NULL, SND_SYNC);
		}
		private: System::Void usound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("u.wav"), NULL, SND_SYNC);
		}
		private: System::Void uasound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ua.wav"), NULL, SND_SYNC);
		}
		private: System::Void uosound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("uo.wav"), NULL, SND_SYNC);
		}
		private: System::Void uisound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ui.wav"), NULL, SND_SYNC);
		}
		private: System::Void uaisound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("uai.wav"), NULL, SND_SYNC);
		}
		private: System::Void uansound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("uan.wav"), NULL, SND_SYNC);
		}
		private: System::Void unsound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("un.wav"), NULL, SND_SYNC);
		}
		private: System::Void osound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("o.wav"), NULL, SND_SYNC);
		}
		private: System::Void ongsoung_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ong.wav"), NULL, SND_SYNC);
		}
		private: System::Void ousound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ou.wav"), NULL, SND_SYNC);
		}
		private: System::Void esound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("e.wav"), NULL, SND_SYNC);
		}
		private: System::Void eisound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ei.wav"), NULL, SND_SYNC);
		}
		private: System::Void ensound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("en.wav"), NULL, SND_SYNC);
		}
		private: System::Void engsound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("eng.wav"), NULL, SND_SYNC);
		}
		private: System::Void ersound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("er.wav"), NULL, SND_SYNC);
		}
		private: System::Void üsound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ü.wav"), NULL, SND_SYNC);
		}
		private: System::Void üesound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("üe.wav"), NULL, SND_SYNC);
		}
		private: System::Void üansound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("üan.wav"), NULL, SND_SYNC);
		}
		private: System::Void ünsound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ün.wav"), NULL, SND_SYNC);
		}
		private: System::Void isound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("i.wav"), NULL, SND_SYNC);
		}
		private: System::Void iasound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ia.wav"), NULL, SND_SYNC);
		}
		private: System::Void iaosound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("iao.wav"), NULL, SND_SYNC);
		}
		private: System::Void iesound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ie.wav"), NULL, SND_SYNC);
		}
		private: System::Void iusound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("iu.wav"), NULL, SND_SYNC);
		}
		private: System::Void iansound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ian.wav"), NULL, SND_SYNC);
		}
		private: System::Void iangsound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("iang.wav"), NULL, SND_SYNC);
		}
		private: System::Void insound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("in.wav"), NULL, SND_SYNC);
		}
		private: System::Void ingsound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ing.wav"), NULL, SND_SYNC);
		}
		private: System::Void iongsound_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("iong.wav"), NULL, SND_SYNC);
		}

};
}