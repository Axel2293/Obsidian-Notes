# If pip is not present in you system
```bash
sudo apt update
sudo apt install python3-pip
```
# Install and activate virtual env (Linux/MacOS)
```bash
python3 -m pip install virtualenv
python3 -m venv ./venv
source ./venv/bin/activate
```
# Install and activate virtual env (Windows)
```bash
python3 -m pip install virtualenv
python3 -m venv ./venv
.\venv\Scripts\Activate.ps1
```
# Install project python requirements
```bash
pip install -r requirements.txt
```
