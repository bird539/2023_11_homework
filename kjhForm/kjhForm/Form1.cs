namespace kjhForm
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            startDateTime = DateTime.Now;
        }

        DateTime startDateTime;
        public DateTime GetStartDateTime()
        {
            return startDateTime;
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            //MessageBox.Show(GetStartDateTime().ToString());
            startDateTime = DateTime.Now;
            Text = GetStartDateTime().ToString();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button5_Click(object sender, EventArgs e)
        {
            button2.BringToFront();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (button5.Enabled == false) { button5.Enabled = true; }
            else { button5.Enabled = false; }

            if (button4.Enabled == false) { button4.Enabled = true; }
            else { button4.Enabled = false; }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            button2.SendToBack();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (button5.Visible == false) { button5.Visible = true; }
            else { button5.Visible = false; }

            if (button4.Visible == false) { button4.Visible = true; }
            else { button4.Visible = false; }

            if (button1.Visible == false) { button1.Visible = true; }
            else { button1.Visible = false; }

            if (button2.Visible == false) { button2.Visible = true; }
            else { button2.Visible = false; }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            Width = 500;
            Height = 300;
        }

        private void Form1_Resize_1(object sender, EventArgs e)
        {
           // if (Width > 500)
           //     Width = 500;
           // else if (Width < 300)
           //     Width = 300;
            if (Height > 700)
                Height = 700;
            else if (Height < 300)
                Height = 300;
        }

        private void Form1_Click(object sender, EventArgs e)
        {
            Font f = new Font("Times New Roman", 12, FontStyle.Regular);
            Graphics g = CreateGraphics();
            g.Clear(System.Drawing.SystemColors.Control);
            g.DrawString(GetStartDateTime().ToString(), f, Brushes.Black, 50, 100);
        }


        private string strTemp;
        private void UpdateLabel(String s, bool b)
        {
            if (b) { label1.Text += s; }
            else
            {
                strTemp = label1.Text;
                int i = strTemp.IndexOf(s.Substring(0, 1));
                int j = i + s.Length;
                label1.Text = strTemp.Remove(i, j - i);
            }
        }
        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLabel(checkBox1.Text, checkBox1.Checked);
        }


        private void label1_Click(object sender, EventArgs e)
        {
            UpdateLabel(checkBox2.Text, checkBox1.Checked);
        }

        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLabel(checkBox2.Text, checkBox1.Checked);
        }

        private void checkBox4_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLabel(checkBox4.Text, checkBox1.Checked);
        }

        private void checkBox3_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLabel(checkBox3.Text, checkBox1.Checked);
        }
    }
}