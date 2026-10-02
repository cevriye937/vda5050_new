# VDA5050 AGV

Qt 6 ile yazılmış bir VDA 5050 AGV örneği. Araç durumu, sipariş, anlık aksiyon, factsheet ve bağlantı mesajlarını JSON olarak üretir ve MQTT üzerinden yayınlar.

```
src/main.cpp            program girişi
src/agv/                AGV modeli
src/mqtt/               MQTT istemcisi
src/common/             birden fazla mesajın kullandığı tipler
src/state/              state mesajı
src/order/              order, node, edge
src/instantaction/      anlık aksiyon
src/response/           yanıt mesajı
src/connection/         bağlantı mesajı
src/visualization/      görselleştirme mesajı
src/factsheet/          factsheet mesajı
src/zone/               zone ve zone set
resources/              örnek JSON
```

Başlıklar `#include "dosya.h"` biçiminde kalır. CMake her `src` alt klasörünü include yoluna ekler.

## Gereksinimler

- CMake 3.19 veya daha yeni
- C++ derleyicisi
- Qt 6.5 veya daha yeni, şu bileşenlerle: Core, Network, Mqtt

Qt MQTT varsayılan Qt kurulumunda gelmez. Kullanılan Qt kitiyle aynı sürüme kurulmuş olmalıdır. Örneğin Qt 6.12 kullanılıyorsa `libQt6Mqtt.so.6.12.0` o kitin `lib` klasöründe durmalıdır.

## Derleme

Qt Creator'da kit olarak MQTT kurulu Qt sürümünü seçin (bu makinede Qt 6.12). Eski proje dosyası başka bir bilgisayardaki Qt 6.5.3 yolunu gösterir; o kit burada yoktur.

Komut satırı:

```bash
cmake -S . -B build -DCMAKE_PREFIX_PATH=$HOME/Qt/6.12.0/gcc_64
cmake --build build
```

`CMAKE_PREFIX_PATH` değerini kendi Qt kurulumunuzun `gcc_64` klasörüne göre değiştirin.

## Çalıştırma

```bash
./build/VDA5050_AGV
```

Program örnek VDA 5050 JSON mesajlarını konsola yazar, sonra MQTT aracına bağlanır. Adres `src/mqtt/mqttclient.cpp` içindedir: `192.168.0.66`, port `1883`.
