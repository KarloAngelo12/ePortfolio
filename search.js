const siteContent = [
    // PAGE: INDEX / HOME
    { 
        name: "Profile & About Me", 
        url: "index.html", 
        content: "about me profile karlo angelo l. babaran biography student information technology soit mapua personal details" 
    },
    { 
        name: "Goals & Strengths", 
        url: "index.html", 
        content: "goals strengths achievements skills professional objectives ambition technical capabilities" 
    },

    // PAGE: GRADUATE ATTRIBUTES (The "Meat" of your work)
    { 
        name: "Programming Exercises", 
        url: "attributes.html#CSS121L", 
        content: "css121p css121 programming lab laboratory sequential selection loops functions c++ source code sourcecode" 
    },
    { 
        name: "Individual Programs (Names)", 
        url: "attributes.html#CSS121L", 
        content: "lupang hinirang greeting age swapping integer arithmetic triangle area power calculator perimeter weight celsius fahrenheit tip repair bmi assembly tickets heart rate positive score rain voting temp parity sign adult minor discount utility scholarship atm month calculator vowel consonant traffic light comparison pin payroll weather beacon psychology leap even odd quadratic profit loss repeater asterisk grid rock paper scissors rps" 
    },

    // PAGE: STUDENT OUTCOMES
    { 
        name: "Student Outcomes", 
        url: "outcomes.html", 
        content: "so1 so2 so3 so4 so5 so6 so7 so8 so9 abet mapping analysis design engineering standards computing practice" 
    },

    // PAGE: CONTACT
    { 
        name: "Contact Information", 
        url: "contact.html", 
        content: "contact reach email facebook instagram social media official concerns link message babaran" 
    }
];

function executeSearch(event) {
    if (event.key === "Enter") {
        const query = document.getElementById('siteSearch').value.toLowerCase().trim();
        if (query === "") return;

        // The "Any Single Word" Logic: 
        // This looks through the name and the content string for a match.
        const match = siteContent.find(item => 
            item.content.toLowerCase().includes(query) || 
            item.name.toLowerCase().includes(query)
        );

        if (match) {
            window.location.href = match.url;
        } else {
            // Optional: If not found in your site, offer to search Google
            if (confirm("Not found in portfolio. Search the web for '" + query + "' instead?")) {
                window.open(`https://www.google.com/search?q=${encodeURIComponent(query)}`, '_blank');
            }
        }
    }
}
function executeSearch(event) {
    if (event.key === "Enter") {
        const query = document.getElementById('siteSearch').value.toLowerCase().trim();
        if (!query) return;

        const match = siteContent.find(item => 
            item.content.toLowerCase().includes(query) || 
            item.name.toLowerCase().includes(query)
        );

        if (match) {
            // Check if the match is a specific tab on the activities page
            if (match.tab) {
                window.location.href = "activities.html?tab=" + match.tab;
            } else {
                window.location.href = match.url;
            }
        } else {
            alert("Nothing found for '" + query + "'. Try 'Seminars' or 'CSS121P'.");
        }
    }
}

function openTab(evt, tabName) {
    const pane = document.getElementById(tabName);
    if (!pane) return;

    // Hide all panes and remove active states
    document.querySelectorAll('.tab-pane').forEach(p => p.classList.remove('active'));
    document.querySelectorAll('.tab-btn').forEach(b => b.classList.remove('active'));
    
    // Show target
    pane.classList.add('active');
    if (evt) evt.currentTarget.classList.add('active');

    // Hide placeholder if it exists (on Attributes page)
    const placeholder = document.getElementById("placeholder-text");
    if (placeholder) placeholder.style.display = "none";
    const mainContent = document.getElementById("main-content");
    if (mainContent) mainContent.style.border = "none";
}


function toggleSidebar() {
    const sidebar = document.getElementById('sidebar');
    const icon = document.getElementById('toggleIcon');
    if (!sidebar) return;
    sidebar.classList.toggle('closed');
    if (icon) icon.innerHTML = sidebar.classList.contains('closed') ? '▶' : '▼';
}

function togglePill() {
    const content = document.getElementById('pillContent');
    if (content) content.classList.toggle('closed');
}