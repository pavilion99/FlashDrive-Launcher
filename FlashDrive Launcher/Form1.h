#pragma once

namespace FlashDriveLauncher {

	//Namespaces
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::Win32;
	using namespace std;

	//Declaration of Form1 Class
	public ref class Form1 : public System::Windows::Forms::Form
	{
		//Public Components of Form1
	public:
		Form1(void)
		{
			InitializeComponent();
		}

		//Protected Components of Form1
	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

		//Private Components of Form1
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// Do not manually modify
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(146, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"[fd name here]";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(36, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(228, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(8, 190);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(24, 24);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(8, 219);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(24, 24);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(8, 248);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(24, 24);
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(8, 277);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(24, 24);
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(8, 306);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(24, 24);
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(36, 219);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(228, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(36, 248);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(228, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(36, 277);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(228, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(36, 306);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(228, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 25);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Installed Applications";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 128);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(283, 339);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"FlashDrive Launcher";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

		//Events

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 //Declarations
				 ifstream idno;
				 string sver1, sver2, sver3, sver4, sver5;
				 string app1, app2, app3, app4, app5;
				 string iddrv1, iddrv2, iddrv3;

				 //Open and Read From File (id.inf), and close file
				 idno.open("id.inf");
				 getline(idno, sver1);
				 getline(idno, sver2);
				 getline(idno, sver3);
				 getline(idno, sver4);
				 getline(idno, sver5);
				 getline(idno, app1);
				 getline(idno, app2);
				 getline(idno, app3);
				 getline(idno, app4);
				 getline(idno, app5);
				 getline(idno, iddrv1);
				 getline(idno, iddrv2);
				 getline(idno, iddrv3);
				 idno.close();

				 //Get Drive Logo (128x128px)
				 this->pictureBox1->Image = System::Drawing::Image::FromFile("System\\Images\\drivelogo.png");

				 //Convert std::string to System::String^
				 String^ iddrv1fin = gcnew String(iddrv1.c_str());
				 String^ iddrv2fin = gcnew String(iddrv2.c_str());
				 String^ iddrv3fin = gcnew String(iddrv3.c_str());

				 //Set drive label text to stated text in id.inf
				 this->label1->Text = iddrv1fin + L"\n" + iddrv2fin + L"\n" + iddrv3fin;

				 //App icon setup
				 String^ iconlocation = gcnew String("System\\Images\\drivelogo.ico");
				 this->Icon = gcnew System::Drawing::Icon(iconlocation);

				 //All App logos are 24x24px

				 //App1Setup
				 if (app1 != "null"){
					 String^ ver1fin = gcnew String(sver1.c_str());
					 String^ app1fin = gcnew String(app1.c_str());
					 this->button1->Text = app1fin + L" " + ver1fin;
					 this->pictureBox2->Image = System::Drawing::Image::FromFile("System\\Images\\app1.png");
				 }
				 else{
					 this->button1->Visible = false;
				 }

				 //App2Setup
				 if (app2 != "null"){
					 String^ ver2fin = gcnew String(sver2.c_str());
					 String^ app2fin = gcnew String(app2.c_str());
					 this->button2->Text = app2fin + L" " + ver2fin;
					 this->pictureBox3->Image = System::Drawing::Image::FromFile("System\\Images\\app2.png");
				 }
				 else{
					 this->button2->Visible = false;
				 }

				 //App3Setup
				 if (app3 != "null"){
					 String^ ver3fin = gcnew String(sver3.c_str());
					 String^ app3fin = gcnew String(app3.c_str());
					 this->button3->Text = app3fin + L" " + ver3fin;
					 this->pictureBox4->Image = System::Drawing::Image::FromFile("System\\Images\\app3.png");
				 }
				 else{
					 this->button3->Visible = false;
				 }

				 //App4Setup
				 if (app4 != "null"){
					 String^ ver4fin = gcnew String(sver4.c_str());
					 String^ app4fin = gcnew String(app4.c_str());
					 this->button4->Text = app4fin + L" " + ver4fin;
					 this->pictureBox5->Image = System::Drawing::Image::FromFile("System\\Images\\app4.png");
				 }
				 else{
					 this->button4->Visible = false;
				 }

				 //App5Setup
				 if (app5 != "null"){
					 String^ ver5fin = gcnew String(sver5.c_str());
					 String^ app5fin = gcnew String(app5.c_str());
					 this->button5->Text = app5fin + L" " + ver5fin;
					 this->pictureBox6->Image = System::Drawing::Image::FromFile("System\\Images\\app5.png");
				 }
				 else{
					 this->button5->Visible = false;
				 }
				 //EndSetup
			 };


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 STARTUPINFO sInfo;
				 ZeroMemory(&sInfo, sizeof(sInfo));
				 sInfo.cb = sizeof(STARTUPINFO);
				 PROCESS_INFORMATION pInfo;
				 CreateProcess(L"System\\Apps\\app1\\app1.exe", NULL, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &sInfo, &pInfo);
				 CloseHandle(pInfo.hProcess);
				 CloseHandle(pInfo.hThread);
			 }

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 STARTUPINFO sInfo;
				 ZeroMemory(&sInfo, sizeof(sInfo));
				 sInfo.cb = sizeof(STARTUPINFO);
				 PROCESS_INFORMATION pInfo;
				 CreateProcess(L"System\\Apps\\app2\\app2.exe", NULL, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &sInfo, &pInfo);
				 CloseHandle(pInfo.hProcess);
				 CloseHandle(pInfo.hThread);
			 }

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 STARTUPINFO sInfo;
				 ZeroMemory(&sInfo, sizeof(sInfo));
				 sInfo.cb = sizeof(STARTUPINFO);
				 PROCESS_INFORMATION pInfo;
				 CreateProcess(L"System\\Apps\\app3\\app3.exe", NULL, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &sInfo, &pInfo);
				 CloseHandle(pInfo.hProcess);
				 CloseHandle(pInfo.hThread);
			 }

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 STARTUPINFO sInfo;
				 ZeroMemory(&sInfo, sizeof(sInfo));
				 sInfo.cb = sizeof(STARTUPINFO);
				 PROCESS_INFORMATION pInfo;
				 CreateProcess(L"System\\Apps\\app4\\app4.exe", NULL, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &sInfo, &pInfo);
				 CloseHandle(pInfo.hProcess);
				 CloseHandle(pInfo.hThread);
			 }

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 STARTUPINFO sInfo;
				 ZeroMemory(&sInfo, sizeof(sInfo));
				 sInfo.cb = sizeof(STARTUPINFO);
				 PROCESS_INFORMATION pInfo;
				 CreateProcess(L"System\\Apps\\app5\\app5.exe", NULL, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &sInfo, &pInfo);
				 CloseHandle(pInfo.hProcess);
				 CloseHandle(pInfo.hThread);

				 
			 }
	};
}