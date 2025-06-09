import matplotlib.pyplot as plt
import pandas as pd
import numpy as np

kolej = pd.read_csv("koleje11.csv", sep=" ")
kolej2 = kolej.melt(id_vars="Marka",value_vars=["2010","2011", "2012"], var_name="Rok", value_name="Wartość")
kolej2["Rok"] = kolej2["Rok"].astype(int)
eurostar = kolej2[kolej2["Marka"] =="Eurostar"]
sncf = kolej2[kolej2["Marka"] =="SNCF"]
plt.subplot(1,2,1)
plt.barh(eurostar["Rok"], eurostar["Wartość"])
plt.subplot(1,2,2)
plt.barh(sncf["Rok"], sncf["Wartość"])
plt.show()