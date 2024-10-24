import os
import json

class Config:
    def __init__(self):
        self.inpDir = "/home/dhpcap/1cdac/python/vscode/utils/jsonfile/"
        self.configJson = "keys.json"
        self.config_data = None

        self.filepath = os.path.join(self.inpDir, self.configJson)
        
        #"/home/dhpcap/1cdac/python/vscode/utils/keys.json"

        try: 
            with open(self.filepath,'r') as file:
                config_data = json.load(file)
                self.config_data = config_data

        except FileNotFoundError:
            print(f"Configuration file not found: {self.filepath}")
        except json.JSONDecodeError:
            print(f"Error decoding JSON from the file: {self.filepath}")
        except Exception as e:
            print(f"An error occured: {e}")

    def get_key(self, keyName):
        __key = None
        try: 
            __key = self.config_data.get(keyName)
        except Exception as e:
            print(f"An error occured: {e}")
        return __key 
    
    def get_key_names(self):
        return self.config_data.keys()
    
#conf=Config()
#conf.get_key_names()

#api_key = Config.get_key("weather_map_key")


# print(Config.get_key('weather_map_key'))