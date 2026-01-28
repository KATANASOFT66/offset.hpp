document.addEventListener('DOMContentLoaded', () => {
    document.getElementById('version').textContent = offsetsData.version;
    document.getElementById('updated').textContent = offsetsData.lastUpdated;
    
    let total = 0;
    offsetsData.categories.forEach(c => total += c.offsets.length);
    document.getElementById('count').textContent = total;
    
    renderOffsets();
    
    document.getElementById('searchBox').addEventListener('input', (e) => {
        renderOffsets(e.target.value);
    });
});

function renderOffsets(search = '') {
    const container = document.getElementById('offsetsContainer');
    let html = '';

    offsetsData.categories.forEach(cat => {
        const filtered = cat.offsets.filter(o => 
            o.name.toLowerCase().includes(search.toLowerCase()) ||
            o.value.toLowerCase().includes(search.toLowerCase())
        );
        
        if (!filtered.length) return;

        const icons = {
            datamodel: 'fa-database',
            instance: 'fa-cube',
            task: 'fa-clock',
            script: 'fa-code',
            mouse: 'fa-mouse-pointer'
        };

        html += `
            <div class="category-section">
                <div class="category-header">
                    <div class="category-icon ${cat.icon}">
                        <i class="fas ${icons[cat.icon]}"></i>
                    </div>
                    <h2 class="category-title">${cat.name}</h2>
                    <span class="category-count">${filtered.length}</span>
                </div>
                <table class="offset-table">
                    <thead>
                        <tr>
                            <th>Name</th>
                            <th>Offset</th>
                            <th>Type</th>
                            <th></th>
                        </tr>
                    </thead>
                    <tbody>
                        ${filtered.map(o => `
                            <tr>
                                <td class="offset-name">${o.name}</td>
                                <td><span class="offset-value ${o.value === '0x0' ? 'zero' : ''}">${o.value}</span></td>
                                <td class="offset-type">${o.type}</td>
                                <td><button class="copy-btn" onclick="copy('${o.value}', this)"><i class="fas fa-copy"></i></button></td>
                            </tr>
                        `).join('')}
                    </tbody>
                </table>
            </div>
        `;
    });

    container.innerHTML = html || '<div style="text-align:center;padding:40px;color:#8b949e;">No results</div>';
}

function copy(value, btn) {
    navigator.clipboard.writeText(value).then(() => {
        showToast('Copied: ' + value);
        btn.classList.add('copied');
        setTimeout(() => btn.classList.remove('copied'), 1500);
    });
}

function showToast(msg) {
    const toast = document.getElementById('toast');
    toast.textContent = msg;
    toast.classList.add('show');
    setTimeout(() => toast.classList.remove('show'), 2000);
}