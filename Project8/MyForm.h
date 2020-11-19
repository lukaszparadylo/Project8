#pragma once
#include <opencv2/opencv.hpp>
#include <iostream>
#include <time.h>
#include <conio.h>
#include<string>
#include <windows.h>

int slider_position = 100;
int slider_2_position = 1;
double fractal = 1;
bool flag = true;
cv::VideoCapture cap(0);
cv::Mat frame;
cv::Mat save_image;
cv::Mat img_lower_brightness;

namespace Project8 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TrackBar^ trackBar3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(263, 61);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Po³¹cz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(281, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1191, 737);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 604);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { 0, 1, 2 });
			this->comboBox1->Location = System::Drawing::Point(12, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(263, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->Text = L"0";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(12, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(263, 63);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Roz³¹cz";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Wybór kamery";
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(12, 235);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(263, 45);
			this->trackBar1->TabIndex = 6;
			this->trackBar1->Value = 50;
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(12, 299);
			this->trackBar2->Maximum = 100;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(263, 45);
			this->trackBar2->TabIndex = 6;
			this->trackBar2->Value = 50;
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(12, 509);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(263, 68);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Zapisz";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// trackBar3
			// 
			this->trackBar3->Location = System::Drawing::Point(12, 365);
			this->trackBar3->Minimum = 1;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(263, 45);
			this->trackBar3->TabIndex = 8;
			this->trackBar3->Value = 5;
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(12, 416);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(263, 68);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Pauza";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(133, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(136, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 347);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Próbkowanie";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 219);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Kontrast";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 280);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Jasnoœæ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1484, 761);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(1500, 800);
			this->MinimumSize = System::Drawing::Size(1500, 800);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		flag = true;
		timer1->Enabled = true;
		label1->Text = "Kamera: "+comboBox1->SelectedIndex.ToString();
		comboBox1->Enabled = false;
		button2->Enabled = true;
		button1->Enabled = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		timer1->Enabled = false;
		flag = false;
		comboBox1->Enabled = true;
		button1->Enabled = true;
		button3->Enabled = false;
		button4->Enabled = false;
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{

			timer1->Interval = trackBar3->Value * 10;
			label6->Text = "Próbkowanie " + (trackBar3->Value * 10).ToString() + "ms";
			if (flag == true)
			{
				cap.open(comboBox1->SelectedIndex);
				flag = false;
			}
			if (!cap.isOpened())
			{
				label1->Text = "ERROR: Can't initialize camera capture";
			}
			else
			{
				cap >> frame; // read the next frame from camera
				if (frame.empty())
				{
					label2->Text = "ERROR: Can't grab camera frame.";
				}
				else
				{
					fractal = (double)trackBar1->Value / 50;
					label4->Text = (fractal).ToString();
					label5->Text = (trackBar2->Value - 50).ToString();
					frame.convertTo(img_lower_brightness, -1, fractal, trackBar2->Value - 50);
					cv::pyrUp(img_lower_brightness, save_image);
					System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
					System::IntPtr ptr(save_image.ptr());
					System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(save_image.cols, save_image.rows, save_image.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
					System::Drawing::RectangleF rect(0, 0, pictureBox1->Width, pictureBox1->Height);
					graphics->DrawImage(b, rect);
					button3->Enabled = true;
					button4->Enabled = true;
				}

			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error: " + e);
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	bool enabled = true;
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		if (enabled == true)
		{
			button1->Enabled = false;
			comboBox1->Enabled = false;
			timer1->Enabled = false;
			label2->Text = "camera frame";
			enabled = false;
		}
		else
		{
			timer1->Enabled = true;
			enabled = true;
		}
	}
	
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		time_t czas;
		struct tm* ptr;
		time(&czas);
		ptr = localtime(&czas);
		int hour = ptr->tm_hour;
		int minute = ptr->tm_min;
		int secunds = ptr->tm_sec;
		int day = ptr->tm_mday;
		int month = ptr->tm_mon;
		int year = ptr->tm_year;
		std::string data = std::to_string(secunds) + std::to_string(minute) + std::to_string(hour) + std::to_string(day) + std::to_string(month) + std::to_string(year)+".jpg";
		imwrite(data,img_lower_brightness);

	}
};
}
