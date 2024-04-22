# Medidor-de-Corriente-con-Adafruit-ADS1015
## Descripción General
Este proyecto utiliza el convertidor analógico-digital ADS1015 de Adafruit para medir la corriente eléctrica. Está diseñado para monitorizar la corriente en tiempo real y calcular la potencia consumida, proporcionando una base para aplicaciones en la monitorización de energía eléctrica y sistemas automatizados de gestión de energía.

## Componentes y Tecnologías
- **Adafruit ADS1015**: Sensor ADC utilizado para medir precisamente la corriente.
- **Arduino**: Plataforma de microcontrolador para el manejo del sensor y procesamiento de datos.
- **Wire (I2C Library)**: Utilizada para la comunicación entre el Arduino y el ADS1015.

## Instalación y Uso
- Conectar el ADS1015 al Arduino siguiendo el esquemático proporcionado en el código.
- Instalar la librería Adafruit_ADS1X15 mediante el gestor de librerías de Arduino o directamente desde GitHub.
- Cargar el código en el Arduino y conectarlo a una fuente de corriente para realizar las mediciones.

## Ejemplos de Uso
- Monitoreo de corriente en sistemas domésticos para detectar el consumo de electrodomésticos.
- Implementación en sistemas de energía renovable para monitorizar el rendimiento.
- Utilización en sistemas de laboratorio para experimentación y pruebas de carga eléctrica.

## Contribuciones y Desarrollo Futuro
- Ampliación de la funcionalidad para incluir mediciones de otras variables eléctricas como voltaje y factor de potencia.
- Integración con plataformas de IoT para monitoreo remoto y control de la energía.
- Mejora de la precisión de las mediciones y optimización del código para aplicaciones de mayor escala.
"""
