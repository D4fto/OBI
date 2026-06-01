import qrcode
from PIL import Image

# Caminho do arquivo da pixel art
pixel_art_path = "pixel_art.png"  # deve ser 16x16 px

# Link que será embutido no QR Code
link = "https://d4fto.itch.io/linuxdefender"

# Criar QR code
qr = qrcode.QRCode(
    version=1,  # Tamanho menor
    error_correction=qrcode.constants.ERROR_CORRECT_H,  # Alta correção de erro (necessário por causa do logo)
    box_size=10,
    border=4
)

qr.add_data(link)
qr.make(fit=True)

# Criar imagem do QR
qr_img = qr.make_image(fill_color="black", back_color="white").convert('RGBA')

# Redimensionar QR para 64x64
qr_img = qr_img.resize((64, 64), Image.NEAREST)

# Abrir e redimensionar a pixel art se não for 16x16
logo = Image.open(pixel_art_path).convert("RGBA")
logo = logo.resize((16, 16), Image.NEAREST)

# Calcular posição para centralizar o logo
qr_width, qr_height = qr_img.size
logo_width, logo_height = logo.size
pos = ((qr_width - logo_width) // 2, (qr_height - logo_height) // 2)

# Colar o logo no QR Code
qr_img.paste(logo, pos, logo)

# Salvar imagem final
qr_img.save("qr_com_logo.png")
print("QR Code com pixel art salvo como 'qr_com_logo.png'")
